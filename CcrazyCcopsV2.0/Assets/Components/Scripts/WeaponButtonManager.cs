using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponButtonManager : MonoBehaviour
{
    // Start is called before the first frame update

    [SerializeField]
    List<GameObject> WeaponsT;

    [SerializeField]
    List<GameObject> WeaponButton;

    public ScoreSheet scoreSheet;

    GameObject LocalPlayer;

    WeaponManager weaponManager;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(LocalPlayer != null)
        {
            foreach(GameObject i in WeaponsT)
            {
                Debug.Log("WeaponButtonManager.cs :: Update() :: I name = "+ i.name);
                if(weaponManager.IsWeaponActive(i))
                {
                    GameObject button = WeaponButton.Find(obj=>obj.name==i.name);
                    
                    if(button!=null)
                    {
                        button.SetActive(true);
                    }
                }
                else
                {
                    GameObject button = WeaponButton.Find(obj=>obj.name==i.name);
                    if(button!=null)
                    {
                        button.SetActive(false);
                    }
                }
            }
        }
        
    }

    public void SetLocalPlayer(GameObject localPlayer)
    {
        LocalPlayer = scoreSheet.GetLocalPlayer();
        weaponManager = LocalPlayer.GetComponentInChildren<WeaponManager>();
        WeaponsT = weaponManager.GetWeaponListT();
    }
}
