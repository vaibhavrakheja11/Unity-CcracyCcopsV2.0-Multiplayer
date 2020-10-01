using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace CJFinc {

[ExecuteInEditMode]
public class BitmapText : MonoBehaviour {

	public bool best_fit;
	public int min_size, max_size;

	Text text_component;
	RectTransform rt;
	float prev_height;

	void Start () {
		Init();
	}

	public void Init() {
		rt = transform.GetComponent<RectTransform>();
		text_component = transform.GetComponent<Text>();
		prev_height = 0;
		BestFitFont(true);
	}

	void Update () {
		if (Application.isEditor && !Application.isPlaying) BestFitFont();
	}

	void FixedUpdate () {
		BestFitFont();
	}

	public void BestFitFont(bool force = false) {
		if (!enabled || !best_fit) return; // skip for disabled component

		// same block height - no adjustments required, except it force
		if (prev_height == rt.rect.height && !force) return;

		// mix max size check
		if (min_size < 0) min_size = 0;
		if (max_size > 300) max_size = 300;
		if (max_size < min_size) max_size = min_size;
		if (text_component.fontSize > max_size) text_component.fontSize = max_size;
		if (text_component.fontSize < min_size) text_component.fontSize = min_size;

		// text preferred height is more than block height
		if (text_component.preferredHeight > rt.rect.height && text_component.fontSize > min_size) {
			// need to scale down
			while (text_component.preferredHeight > rt.rect.height && text_component.fontSize > min_size) {
				text_component.fontSize --;
			}
		}
		if (text_component.preferredHeight < rt.rect.height && text_component.fontSize < max_size) {
			// need to scale up
			while (text_component.preferredHeight < rt.rect.height && text_component.fontSize < max_size) {
				text_component.fontSize ++;
			}
			// check if last scale exceed block height and scale down for one point
			if (text_component.preferredHeight > rt.rect.height)
				text_component.fontSize --;
		}

		prev_height = rt.rect.height;
	}
}

}
