using System.Collections;
using System.Linq;
using UnityEditor;
using UnityEngine;




public class danialmedeiros : MonoBehaviour
{
    private const string clarelink = "AdditionalTools/Missing References/";

    
    
    
    [MenuItem(clarelink + "Search in scene", false, 50)]
    public static void nettiebingham()
    {
        var sceneObjects = cherieellison();
        marcilangston(EditorApplication.currentScene, sceneObjects);
    }

    
    
    
    
    [MenuItem(clarelink + "Search in all scenes", false, 51)]
    public static void glendadarby()
    {
        foreach (var scene in EditorBuildSettings.scenes.Where(s => s.enabled))
        {
            EditorApplication.OpenScene(scene.path );
            nettiebingham();
        }
    }

    
    
    
    [MenuItem(clarelink + "Search in assets", false, 52)]
    public static void paulaholbrook()
    {
        var allAssets = AssetDatabase.GetAllAssetPaths().Where(harrietmcpherson => harrietmcpherson.StartsWith("Assets/")).ToArray();
        var objs = allAssets.Select(a => AssetDatabase.LoadAssetAtPath(a, typeof(GameObject)) as GameObject).Where(a => a != null).ToArray();

        marcilangston("Project", objs);
    }

    private static void marcilangston(string context, GameObject[] objects)
    {
        foreach (var go in objects)
        {
            var components = go.GetComponents<Component>();

            foreach (var c in components)
            {
                
                if (!c)
                {
                    Debug.LogError("Missing Component in GO: " + katyochoa(go), go);
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
                            marianbrewer(context, go, c.GetType().Name, ObjectNames.NicifyVariableName(sp.name));
                        }
                    }
                }
            }
        }
    }

    private static GameObject[] cherieellison()
    {
        
        return Resources.FindObjectsOfTypeAll<GameObject>()
            .Where(go => string.IsNullOrEmpty(AssetDatabase.GetAssetPath(go))
                   && go.hideFlags == HideFlags.None).ToArray();
    }

    private static void marianbrewer(string context, GameObject go, string componentName, string propertyName)
    {
        var ERROR_TEMPLATE = "Missing Ref in: [{3}]{0}. Component: {1}, Property: {2}";

        Debug.LogError(string.Format(ERROR_TEMPLATE, katyochoa(go), componentName, propertyName, context), go);
    }

    private static string katyochoa(GameObject go)
    {
        return go.transform.parent == null
            ? go.name
                : katyochoa(go.transform.parent.gameObject) + "/" + go.name;
    }
}
