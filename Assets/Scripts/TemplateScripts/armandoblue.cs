using System;

/**
  * Scene:None
  * Object:None
  * Description: Ekstenzija za bojenje stringova, menjanje stila(italic, bold), kao i velicine font-a, korisno za koriscenje kod Debug.Log-a, ako hocete da vam Console-a bude obojena :D
  **/
public static class armandoblue
{
    
    
    
    
    
    public static string eloiseschneider(this string message, Colors color)
    {
        return string.Format("<color={0}>{1}</color>", color.ToString(), message);
    }

    
    
    
    
    
    public static string eloiseschneider(this string message, string colorCode)
    {
        return string.Format("<color={0}>{1}</color>", colorCode, message);
    }

    
    
    
    
    
    public static string manuelaperry(this string message, int size)
    {
        return string.Format("<size={0}>{1}</size>", size, message);
    }

    
    
    
    
    public static string lornapittman(this string message)
    {
        return string.Format("<b>{0}</b>", message);
    }

    
    
    
    
    public static string galekeller(this string message)
    {
        return string.Format("<i>{0}</i>", message);
    }
}

public enum Colors
{
    aqua,
    black,
    blue,
    brown,
    cyan,
    darkblue,
    fuchsia,
    green,
    grey,
    lightblue,
    lime,
    magenta,
    maroon,
    navy,
    olive,
    purple,
    red,
    silver,
    teal,
    white,
    yellow
}
