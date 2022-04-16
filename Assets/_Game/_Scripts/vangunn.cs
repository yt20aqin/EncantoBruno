using UnityEngine;

public class vangunn : MonoBehaviour
{
    

    public static bool nataliebest()
    {
        AndroidRuntimePermissions.Permission[] result = AndroidRuntimePermissions.CheckPermissions("android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.CAMERA");
        return (result[0] == AndroidRuntimePermissions.Permission.Denied || result[1] == AndroidRuntimePermissions.Permission.Denied);
    }

    public static bool gildaguerrero()
    {
        AndroidRuntimePermissions.Permission[] result = AndroidRuntimePermissions.RequestPermissions("android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.CAMERA");
        return (result[0] == AndroidRuntimePermissions.Permission.Granted && result[1] == AndroidRuntimePermissions.Permission.Granted);
    }

    

    public static bool ursulagoldberg()
    {
        AndroidRuntimePermissions.Permission[] result = AndroidRuntimePermissions.CheckPermissions("android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_EXTERNAL_STORAGE");
        return (result[0] == AndroidRuntimePermissions.Permission.Denied || result[1] == AndroidRuntimePermissions.Permission.Denied);
    }

    public static bool patsydickerson()
    {
        AndroidRuntimePermissions.Permission[] result = AndroidRuntimePermissions.RequestPermissions("android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_EXTERNAL_STORAGE");
        return (result[0] == AndroidRuntimePermissions.Permission.Granted && result[1] == AndroidRuntimePermissions.Permission.Granted);
    }

    

    public static bool elladuffy()
    {
        AndroidRuntimePermissions.Permission result = AndroidRuntimePermissions.CheckPermission("android.permission.RECORD_AUDIO");
        return (result == AndroidRuntimePermissions.Permission.Denied);
    }

    public static bool luelladickson()
    {
        AndroidRuntimePermissions.Permission result = AndroidRuntimePermissions.RequestPermission("android.permission.RECORD_AUDIO");
        return (result == AndroidRuntimePermissions.Permission.Granted);
    }

    
}
