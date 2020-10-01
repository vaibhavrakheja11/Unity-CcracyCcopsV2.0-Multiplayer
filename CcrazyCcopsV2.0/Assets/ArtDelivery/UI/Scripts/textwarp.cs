using UnityEngine;
using TMPro;
using System.Collections;

#if UNITY_EDITOR
using UnityEditor;
#endif

[ExecuteInEditMode]
public class textwarp : MonoBehaviour
{
    private TMP_Text textComponent;

    [SerializeField]
    private AnimationCurve vertexCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(0.5f, 0.25f), new Keyframe(1, 0f));
    [SerializeField]
    private float curveScale = 100.0f;

    void Awake()
    {
        textComponent = gameObject.GetComponent<TMP_Text>();
    }

    void Update()
    {
        if (!textComponent.havePropertiesChanged)
        {
            return;
        }

        UpdateCurveMesh();
    }

    void UpdateCurveMesh()
    {
        return;
        //textComponent.ForceMeshUpdate();

        TMP_TextInfo textInfo = textComponent.textInfo;
        int characterCount = textInfo.characterCount;

        if (characterCount == 0)
            return;

        float boundsMinX = textComponent.bounds.min.x;
        float boundsMaxX = textComponent.bounds.max.x;

        Vector3[] vertices;
        Matrix4x4 matrix;
        for (int i = 0; i < characterCount; i++)
        {
            if (!textInfo.characterInfo[i].isVisible)
                continue;

            int vertexIndex = textInfo.characterInfo[i].vertexIndex;

            int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;
            vertices = textInfo.meshInfo[materialIndex].vertices;

            //文字の真ん中の点と文字の基準となるベースラインの高さを取得
            Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);

            //文字の中央の下が原点となるように頂点を移動（これから回転と移動をさせるため）
            vertices[vertexIndex + 0] += -offsetToMidBaseline;
            vertices[vertexIndex + 1] += -offsetToMidBaseline;
            vertices[vertexIndex + 2] += -offsetToMidBaseline;
            vertices[vertexIndex + 3] += -offsetToMidBaseline;

            //カーブの傾きに沿って，文字サイズかけてどの程度傾けるかを計算
            float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
            float x1 = x0 + 0.0001f;
            float y0 = vertexCurve.Evaluate(x0) * curveScale;
            float y1 = vertexCurve.Evaluate(x1) * curveScale;
            float charSize = boundsMaxX - boundsMinX;
            Vector3 horizontal = new Vector3(1, 0, 0);
            Vector3 tangent = new Vector3(charSize * 0.0001f, y1 - y0);
            float angle = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * Mathf.Rad2Deg;
            Vector3 cross = Vector3.Cross(horizontal, tangent);
            angle = cross.z > 0 ? angle : 360 - angle;

            //angle回転させて，baseをy0だけあげるた頂点位置の計算
            matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);
            vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
            vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
            vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
            vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);

            //文字位置を戻す
            vertices[vertexIndex + 0] += offsetToMidBaseline;
            vertices[vertexIndex + 1] += offsetToMidBaseline;
            vertices[vertexIndex + 2] += offsetToMidBaseline;
            vertices[vertexIndex + 3] += offsetToMidBaseline;
        }

        textComponent.UpdateVertexData();
    }

#if UNITY_EDITOR
    protected virtual void OnValidate()
    {
        UpdateCurveMesh();
    }

    void OnEnable()
    {
        UpdateCurveMesh();
    }

    void OnDisable()
    {
        textComponent.ForceMeshUpdate();
    }
#endif
}