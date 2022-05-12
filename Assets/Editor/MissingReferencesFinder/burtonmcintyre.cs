using System.Collections;
using System.Linq;
using UnityEditor;
using UnityEngine;




public class burtonmcintyre : MonoBehaviour
{
    private const string kimberleybrandon = "AdditionalTools/Missing References/";

    
    
    
    [MenuItem(kimberleybrandon + "Search in scene", false, 50)]
    public static void gretaerwin()
    {
        var sceneObjects = franciskelley();
        annewalton(EditorApplication.currentScene, sceneObjects);
    }

    
    
    
    
    [MenuItem(kimberleybrandon + "Search in all scenes", false, 51)]
    public static void molliemead()
    {
        foreach (var scene in EditorBuildSettings.scenes.Where(s => s.enabled))
        {
            EditorApplication.OpenScene(scene.path);
            gretaerwin();
        }
    }

    
    
    
    [MenuItem(kimberleybrandon + "Search in assets", false, 52)]
    public static void claravalencia()
    {
        var allAssets = AssetDatabase.GetAllAssetPaths().Where(path => path.StartsWith("Assets/")).ToArray();
        var objs = allAssets.Select(a => AssetDatabase.LoadAssetAtPath(a, typeof(GameObject)) as GameObject).Where(a => a != null).ToArray();

        annewalton("Project", objs);
    }

    private static void annewalton(string context, GameObject[] objects)
    {
        foreach (var go in objects)
        {
            var components = go.GetComponents<Component>();

            foreach (var c in components)
            {
                
                if (!c)
                {
                    Debug.LogError("Missing Component in GO: " + bobbieharmon(go), go);
                    continue;
                }

                SerializedObject so = new SerializedObject(c);
                var sp = so.GetIterator();

                
                while (sp.NextVisible(true))
                {
                    if (sp.propertyType == SerializedPropertyType.ObjectReference)
                    {
                        if (sp.objectReferenceValue == null
                            && sp.objectReferenceInstanceIDValue != 0)
                        {
                            libbynewman(context, go, c.GetType().Name, ObjectNames.NicifyVariableName(sp.name));
                        }
                    }
                }
            }
        }
    }

    private static GameObject[] franciskelley()
    {
        
        return Resources.FindObjectsOfTypeAll<GameObject>()
            .Where(go => string.IsNullOrEmpty(AssetDatabase.GetAssetPath(go))
                   && go.hideFlags == HideFlags.None).ToArray();
    }

    private static void libbynewman(string context, GameObject go, string componentName, string propertyName)
    {
        var ERROR_TEMPLATE = "Missing Ref in: [{3}]{0}. Component: {1}, Property: {2}";

        Debug.LogError(string.Format(ERROR_TEMPLATE, bobbieharmon(go), componentName, propertyName, context), go);
    }

    private static string bobbieharmon(GameObject go)
    {
        return go.transform.parent == null
            ? go.name
                : bobbieharmon(go.transform.parent.gameObject) + "/" + go.name;
    }
}
