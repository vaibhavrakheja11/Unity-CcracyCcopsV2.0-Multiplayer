#if UNITY_EDITOR
using UnityEditor;
using UnityEngine;
using System.Collections;

namespace CJFinc {

[CustomEditor(typeof(BitmapText))]
[CanEditMultipleObjects]
public class BitmapTextEditor : Editor {

	BitmapText script;
	SerializedProperty best_fit, min_size, max_size;

	void OnEnable () {
		best_fit = serializedObject.FindProperty ("best_fit");
		min_size = serializedObject.FindProperty ("min_size");
		max_size = serializedObject.FindProperty ("max_size");

		script = (BitmapText)target;
		if (!Application.isPlaying) script.Init();
	}

	public override void OnInspectorGUI() {
		serializedObject.Update ();

		EditorGUILayout.Space();
		best_fit.boolValue = EditorGUILayout.Toggle("Best Fit Bitmap Font?", best_fit.boolValue);
		if (best_fit.boolValue) {
			min_size.intValue = EditorGUILayout.IntField("Min Size", min_size.intValue);
			if (max_size.intValue < min_size.intValue) min_size.intValue = max_size.intValue;

			max_size.intValue = EditorGUILayout.IntField("Max Size", max_size.intValue);
			if (max_size.intValue < min_size.intValue) max_size.intValue = min_size.intValue;
		}
		EditorGUILayout.Space();

		serializedObject.ApplyModifiedProperties ();

		script.BestFitFont(true);
	}

}
}

#endif
