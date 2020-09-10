using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaceMapWeaponSpawnner : MonoBehaviour
{
    public List<GameObject> WeaponSpawnPoints;

    public List<GameObject> SpawningWeponPrefabs;

    public List<GameObject> SpawnedWeapons;

    public float weaponRespawnTime;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnWeapons());
    }

    IEnumerator SpawnWeapons()
    {
        foreach(var weapon in SpawnedWeapons)
        {
            Destroy(weapon.gameObject);
        }
        foreach(var spawnPoint in WeaponSpawnPoints)
        {
            GameObject spawnWeaponObject = Instantiate(SpawningWeponPrefabs[Random.Range(0,SpawningWeponPrefabs.Count)], spawnPoint.transform);
            SpawnedWeapons.Add(spawnWeaponObject);
        }

        yield return new WaitForSeconds(weaponRespawnTime);
    }


}
