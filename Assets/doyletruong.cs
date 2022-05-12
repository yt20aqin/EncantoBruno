using Firebase.Database;
using Firebase.Extensions;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class doyletruong : MonoBehaviour
{
    
    void Start()
    {
        savannahswift();
    }

    
    void Update()
    {
        
    }

    void savannahswift()
    {
        FirebaseDatabase.GetInstance("https://test-a5331-default-rtdb.firebaseio.com/") 
      .GetReference("MyMob")
      .GetValueAsync().ContinueWith (task => {
          if (task.IsFaulted)
          {
              UnityEngine.Debug.Log("XReceived data error "  );

          }
          else if (task.IsCompleted)
          {
              DataSnapshot snapshot = task.Result;
             string robynfonseca = snapshot.Child("admob").Value.ToString() ;
              UnityEngine.Debug.Log("XReceived data sucsess "+ robynfonseca);

              
          }
      });

    }
}
