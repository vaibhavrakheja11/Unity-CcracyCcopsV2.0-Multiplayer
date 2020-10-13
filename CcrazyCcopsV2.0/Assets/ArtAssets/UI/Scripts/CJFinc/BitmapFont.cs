#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;

using System;
using System.Collections;
using System.Collections.Generic;

using System.IO;
using System.Xml;

#pragma warning disable 0618

namespace CJFinc {

	public static class BitmapFont {
		static string f_folder_path;

		static string f_texture_path;
		static string f_config_path;
		static string f_material_path;
		static Material f_material;
		static string f_custom_font_path;
		static Font f_custom_font;
		static string [] guids;

		public const string log_prefix = "[CJFinc: BF tools] ";


		// MENU
		[MenuItem("Assets/CJFinc: BF tools/Rebuild Bitmap Font(s)", false, 41)]
		public static void Rebuild() {
			if (Selection.objects.Length == 0) {
				Debug.LogWarning("Unity Editor didn't return a selected folder. In case of two columns layout in Asset panel you have to select folder in second(right-side) panel! See FAQ section for details http://cjf.in.ua/post/126664936138/new-cjfinc-bitmap-font-tools-plugin-for-unity");
			}

			for (int i = 0; i < Selection.objects.Length; ++i) {
				if (CheckAndInitFontItems(Selection.objects[i]))
					BuildFontCharacters(Selection.objects[i]);
			}
		}

		[MenuItem("Assets/CJFinc: BF tools/Rate Us", false, 51)]
		public static void RateUs() {
			Application.OpenURL("http://bit.ly/1B3iwYN");
		}

		[MenuItem("Assets/CJFinc: BF tools/Help", false, 52)]
		public static void Help() {
			Application.OpenURL("http://bit.ly/1vkcW0Q");
		}

		[MenuItem("Assets/CJFinc: BF tools/Report a problem", false, 53)]
		public static void ReportProblem() {
			Application.OpenURL("mailto:cjf.inc@gmail.com?subject=CJFinc%20BF%20tools%20problem");
		}


		// PRIVATE METHODS
		private static bool CheckAndInitFontItems(UnityEngine.Object obj) {
			// check folder
			f_folder_path = AssetDatabase.GetAssetPath(obj);
			if (!Directory.Exists(f_folder_path)) {
				Debug.LogError(log_prefix + "Please select font folder(s) with font texture and xml file inside");
				return false;
			}
			Debug.Log(log_prefix + "Found font folder: " + f_folder_path);

			// texture
			guids = AssetDatabase.FindAssets("t:texture", new string[] {f_folder_path});
			if (guids.Length == 0) {
				f_texture_path = null;
				Debug.LogError(log_prefix + "Add font texture to selected folder [" + f_folder_path + "]");
				return false;
			}
			else
				f_texture_path = AssetDatabase.GUIDToAssetPath(guids[0]);
			Debug.Log(log_prefix + "Found font texture: " + f_texture_path);

			// font congif (xml or txt)
			guids = AssetDatabase.FindAssets("t:TextAsset", new string[] {f_folder_path});
			if (guids.Length == 0) {
				f_config_path = null;
				Debug.LogError(log_prefix + "Add font file (fnt, txt, xml) to selected folder [" + f_folder_path + "]");
				return false;
			}
			else
				f_config_path = AssetDatabase.GUIDToAssetPath(guids[0]);
			Debug.Log(log_prefix + "Found font config: " + f_config_path);


			// material
			guids = AssetDatabase.FindAssets("t:Material", new string[] {f_folder_path});
			if (guids.Length == 0) {
				f_material_path = f_folder_path + "/"+obj.name+".mat";
				f_material = new Material(Shader.Find("UI/Default"));
				f_material.mainTexture = AssetDatabase.LoadAssetAtPath(f_texture_path, typeof(Texture)) as Texture;
				AssetDatabase.CreateAsset(f_material, f_material_path);
			}
			else {
				f_material_path = AssetDatabase.GUIDToAssetPath(guids[0]);
				f_material = AssetDatabase.LoadAssetAtPath(f_material_path, typeof(Material)) as Material;
			}
			Debug.Log(log_prefix + "Created font material: " + f_material_path);

			return true;
		}


		private static void BuildFontCharacters (UnityEngine.Object obj) {
			TextAsset f_config = AssetDatabase.LoadAssetAtPath(f_config_path, typeof(TextAsset)) as TextAsset;

			FontConfig fc = new FontConfig(f_config.text);
			if (!fc.is_parsed_successfully) {
				Debug.LogError(log_prefix + "Font config parsing has been failed! \nPlease make shure that "+f_config_path+" has an xml or txt structure! Error message: " + fc.error_message);
				return;
			}
			Debug.Log(log_prefix + "Succesfully parsed "+ fc.chars_count +" chars");

			// create chars
			CharacterInfo[] chs = new CharacterInfo[fc.chars_count];
			for (int i=0; i<fc.chars_count; i++) {
					CharacterInfo charInfo = new CharacterInfo ();
					Dictionary<string, int> ch = fc.chars[i];

					charInfo.index = ch["id"];
					charInfo.flipped = false;
					charInfo.uv.width = 1f * ch["width"] / fc.c_scaleW;
					charInfo.uv.height = 1f * ch["height"] / fc.c_scaleH;
					charInfo.uv.x = 1f * ch["x"] / fc.c_scaleW;
					charInfo.uv.y = 1f - 1f * ch["y"] / fc.c_scaleH - charInfo.uv.height;
					charInfo.vert.x = ch["xoffset"];
					charInfo.vert.y = -1 * ch["yoffset"];
					charInfo.vert.width = ch["width"];
					charInfo.vert.height = -1 * ch["height"];
					charInfo.width = ch["xadvance"];

					chs[i] = charInfo;
			}

			// create font
			f_custom_font_path = f_folder_path + "/"+obj.name+".fontsettings";
			f_custom_font = new Font();
			f_custom_font.material = f_material;

			// add chars
			f_custom_font.characterInfo = chs;

			// apply font params
			SerializedObject f_serialized = new SerializedObject(f_custom_font);
			f_serialized.FindProperty("m_FontSize").floatValue = fc.c_base;
			f_serialized.FindProperty("m_LineSpacing").floatValue = fc.c_lineHeight;
			f_serialized.FindProperty("m_Descent").floatValue = -1 * fc.c_lineHeight;
			f_serialized.ApplyModifiedProperties();

			// create new asset
			Font f_custom_font_existing = AssetDatabase.LoadMainAssetAtPath (f_custom_font_path) as Font;
			if (f_custom_font_existing != null) {
				EditorUtility.CopySerialized (f_custom_font, f_custom_font_existing);
				Debug.Log(log_prefix + "Updated existing custom font: " + f_custom_font_path);
			}
			else {
				AssetDatabase.CreateAsset(f_custom_font, f_custom_font_path);
				Debug.Log(log_prefix + "Created custom font: " + f_custom_font_path);
			}

			// update assets
			EditorUtility.SetDirty(f_custom_font);
			AssetDatabase.SaveAssets();
		}
	}


	// font config class
	class FontConfig {
		bool _is_parsed_successfully;
		public bool is_parsed_successfully { get { return _is_parsed_successfully; } }

		string _error_message;
		public string error_message { get { return _error_message; } }

		public int chars_count { get { return chars.Count; } }

		// config data
		public int c_scaleW, c_scaleH;
		public float c_base, c_lineHeight;
		public List<Dictionary<string, int>> chars;

		public FontConfig(string config) {
			_is_parsed_successfully = false;
			_error_message = "";

			c_scaleW = c_scaleH = 0;
			c_base = c_lineHeight = 0;
			chars = new List<Dictionary<string, int>>();

			_is_parsed_successfully = ParseConfig(config);
		}

		bool ParseConfig(string config) {
			if (ParseAsXml(config)) return true;
			if (ParseAsTxt(config)) return true;
			return false;
		}

		bool ParseAsXml(string config) {
			// try to parse xml
			var xml_data = new XmlDocument();
			try {
				xml_data.LoadXml(config);
			}
			catch {
				_error_message = "Wrong XML structure. XmlDocument.LoadXml failed to parse xml structure.";
				return false;
			}

			// check root node
			if (xml_data.DocumentElement.Name != "font") {
				_error_message = "Xml error - no font root element found.";
				return false;
			}

			// parse font data
			XmlNode common = xml_data.GetElementsByTagName("common")[0];
			c_scaleW = int.Parse(common.Attributes.GetNamedItem("scaleW").InnerText);
			c_scaleH = int.Parse(common.Attributes.GetNamedItem("scaleH").InnerText);

			// this is known issue while importing ShoeBox tool bitmap fonts (starling settings template)
			if (common.Attributes.GetNamedItem("base") == null) {
				Debug.Log(BitmapFont.log_prefix + "Warning: There is no 'base' attribute found in 'common' section. Setting it to default 32.");
				c_base = 32;
			}
			else {
				c_base = float.Parse(common.Attributes.GetNamedItem("base").InnerText);
			}

			c_lineHeight = float.Parse(common.Attributes.GetNamedItem("lineHeight").InnerText);

			// parse all font chars
			XmlNode node = xml_data.DocumentElement["chars"];
			foreach (XmlNode chars_item in node.ChildNodes) {
				Dictionary<string, int> ch = new Dictionary<string, int>();

				// skip not Element node
				if (chars_item.NodeType != XmlNodeType.Element) continue;

				ch["id"] = int.Parse(chars_item.Attributes["id"].Value);
				ch["x"] = int.Parse(chars_item.Attributes["x"].Value);
				ch["y"] = int.Parse(chars_item.Attributes["y"].Value);
				ch["width"] = int.Parse(chars_item.Attributes["width"].Value);
				ch["height"] = int.Parse(chars_item.Attributes["height"].Value);
				ch["xoffset"] = int.Parse(chars_item.Attributes["xoffset"].Value);
				ch["yoffset"] = int.Parse(chars_item.Attributes["yoffset"].Value);
				ch["xadvance"] = int.Parse(chars_item.Attributes["xadvance"].Value);

				chars.Add(ch);
			}

			return true;
		}

		bool ParseAsTxt(string config) {
			string[] lines = config.Split('\n');

			foreach(string line in lines) {
				string[] p = line.Split(' ');

				switch (p[0]) {
					case "common":
						ParseTxtCommon(p);
						break;
					case "char":
						ParseTxtChar(p);
						break;
				}
			}

			return true;
		}

		void ParseTxtCommon(string[] p) {
			foreach(string param in p) {
				string[] key_value = param.Split('=');
				if (key_value.Length != 2) continue;

				string key = key_value[0];
				string value = key_value[1];

				switch(key) {
					case "scaleW":
						c_scaleW = int.Parse(value);
						break;
					case "scaleH":
						c_scaleH = int.Parse(value);
						break;
					case "base":
						c_base = float.Parse(value);
						break;
					case "lineHeight":
						c_lineHeight = float.Parse(value);
						break;
				}
			}
		}

		void ParseTxtChar(string[] p) {
			Dictionary<string, int> ch = new Dictionary<string, int>();

			foreach(string param in p) {
				string[] key_value = param.Split('=');
				if (key_value.Length != 2) continue;

				string key = key_value[0];
				string value = key_value[1];

				switch(key) {
					case "id":
						ch["id"] = int.Parse(value);
						break;
					case "x":
						ch["x"] = int.Parse(value);
						break;
					case "y":
						ch["y"] = int.Parse(value);
						break;
					case "width":
						ch["width"] = int.Parse(value);
						break;
					case "height":
						ch["height"] = int.Parse(value);
						break;
					case "xoffset":
						ch["xoffset"] = int.Parse(value);
						break;
					case "yoffset":
						ch["yoffset"] = int.Parse(value);
						break;
					case "xadvance":
						ch["xadvance"] = int.Parse(value);
						break;
				}
			}

			if (ch.ContainsKey("id")) chars.Add(ch);
		}

	}
}

#endif
