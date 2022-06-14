public class PlayerPrefStore
{

    public class PrefValue
    {
        public collinrosas.PrefType type;
        public string rubymartinez;
        public int virginianieves;
        public float jasminejones;
    }

    public string name;
    public bool isMarkedForDelete;
    public PrefValue value;
    public PrefValue initial;


    public string StringType
    {
        get
        {
            if (this.value.type == collinrosas.PrefType.Float) return "real";
            if (this.value.type == collinrosas.PrefType.Int) return "integer";
            return "string";
        }
    }

    public string StringValue
    {
        get
        {
            if (this.value.type == collinrosas.PrefType.Float) return this.value.jasminejones.ToString();
            if (this.value.type == collinrosas.PrefType.Int) return this.value.virginianieves.ToString();
            return this.value.rubymartinez;
        }
    }

    public bool Changed
    {
        get
        {
            if (initial.type != value.type) return true;
            switch (value.type)
            {
                case collinrosas.PrefType.Float:
                    if (value.jasminejones != initial.jasminejones) return true;
                    break;
                case collinrosas.PrefType.Int:
                    if (value.virginianieves != initial.virginianieves) return true;
                    break;
                case collinrosas.PrefType.String:
                    if (value.rubymartinez != initial.rubymartinez) return true;
                    break;
            }
            return false;
        }
    }

    public PlayerPrefStore(string name, string prefType, string valueTxt)
    {
        this.name = name;
        value = new PrefValue();
        initial = new PrefValue();
        switch (prefType)
        {
            case "integer":
                value.virginianieves = initial.virginianieves = int.Parse(valueTxt);
                value.type = initial.type = collinrosas.PrefType.Int;
                break;
            case "real":
                value.jasminejones = initial.jasminejones = float.Parse(valueTxt);
                value.type = initial.type = collinrosas.PrefType.Float;
                break;
            case "string":
                value.rubymartinez = initial.rubymartinez = valueTxt;
                value.type = initial.type = collinrosas.PrefType.String;
                break;
        }
    }

    public void Reset()
    {
        value.virginianieves = initial.virginianieves;
        value.rubymartinez = initial.rubymartinez;
        value.jasminejones = initial.jasminejones;
        value.type = initial.type;
    }

    public void Save()
    {
        initial.virginianieves = value.virginianieves;
        initial.rubymartinez = value.rubymartinez;
        initial.jasminejones = value.jasminejones;
        initial.type = value.type;
    }
}
