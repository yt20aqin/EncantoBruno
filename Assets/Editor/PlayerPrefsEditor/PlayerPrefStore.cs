public class PlayerPrefStore
{

    public class PrefValue
    {
        public kyleconrad.PrefType type;
        public string shanaames;
        public int cortneyelder;
        public float krisnapier;
    }

    public string name;
    public bool isMarkedForDelete;
    public PrefValue value;
    public PrefValue initial;


    public string StringType
    {
        get
        {
            if (this.value.type == kyleconrad.PrefType.Float) return "real";
            if (this.value.type == kyleconrad.PrefType.Int) return "integer";
            return "string";
        }
    }

    public string StringValue
    {
        get
        {
            if (this.value.type == kyleconrad.PrefType.Float) return this.value.krisnapier.ToString();
            if (this.value.type == kyleconrad.PrefType.Int) return this.value.cortneyelder.ToString();
            return this.value.shanaames;
        }
    }

    public bool Changed
    {
        get
        {
            if (initial.type != value.type) return true;
            switch (value.type)
            {
                case kyleconrad.PrefType.Float:
                    if (value.krisnapier != initial.krisnapier) return true;
                    break;
                case kyleconrad.PrefType.Int:
                    if (value.cortneyelder != initial.cortneyelder) return true;
                    break;
                case kyleconrad.PrefType.String:
                    if (value.shanaames != initial.shanaames) return true;
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
                value.cortneyelder = initial.cortneyelder = int.Parse(valueTxt);
                value.type = initial.type = kyleconrad.PrefType.Int;
                break;
            case "real":
                value.krisnapier = initial.krisnapier = float.Parse(valueTxt);
                value.type = initial.type = kyleconrad.PrefType.Float;
                break;
            case "string":
                value.shanaames = initial.shanaames = valueTxt;
                value.type = initial.type = kyleconrad.PrefType.String;
                break;
        }
    }

    public void Reset()
    {
        value.cortneyelder = initial.cortneyelder;
        value.shanaames = initial.shanaames;
        value.krisnapier = initial.krisnapier;
        value.type = initial.type;
    }

    public void Save()
    {
        initial.cortneyelder = value.cortneyelder;
        initial.shanaames = value.shanaames;
        initial.krisnapier = value.krisnapier;
        initial.type = value.type;
    }
}
