﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Circuit : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject[] waypoints;
    void OnDrawGizmos()
    {
        DrawGizmo(false);
    }

    void OnDrawGizmosSelected()
    {
        DrawGizmo(true);
    }

    void DrawGizmo(bool selected)
    {
        if(selected == false) return;
        if(waypoints.Length >1)
        {
            Vector3 prev = waypoints[0].transform.position;
            for(int i=1; i<waypoints.Length; i++)
            {
                Vector3 next = waypoints[i].transform.position;
                Gizmos.DrawLine(prev,next);
                prev = next;

            }
            Gizmos.DrawLine(prev, waypoints[0].transform.position);

        }
    }
}
