using UnityEngine;
using System.Collections;

public class MyGUI : MonoBehaviour 
{
	public CameraMover MyCameraMover;

	void OnGUI()
	{
		if (GUILayout.Button("Move to 0"))
		{
			this.MyCameraMover.StartCoroutine(this.MyCameraMover.MoveToPosition(0, 1f));
		}
		if (GUILayout.Button("Move to 1"))
		{
			this.MyCameraMover.StartCoroutine(this.MyCameraMover.MoveToPosition(1, 1f));
		}
	}
}
