using Gee;

class Content: GLib.Object {
    public uint64 uid { get; set; default=-1;}
    //private char[] _id = new char[12];
    private uint32[] _id = new uint32[3];
    private char[] id = new char[12];
    private static uint32 sequence = 0;
    public int64 createdOn { get; set; }
    public int64 updatedOn { get; set; }
    //keys are column heading, while values are the data rows
    private Gee.Map<string, Any> map;
    private weak Document doc;

    // to generate uid call here
    private void generateUid(){
        sequence += 1;
        _id[2] = sequence;
        GLib.DateTime dtime = new GLib.DateTime.now_local();
        int64 time = dtime.to_unix();
        uint64 utime = (uint64) time;
        _id[0] =  (uint32) (utime & 0xffffffff);
        _id[1] = GLib.Random.next_int();
        this.transformId();
    }

    private void transformId(){
        char* temp = (char *) _id;
        for(int i=0; i< id.length;i++){
            id[i] = *temp;
        }
    }

    public string getUid(){
        string uidChar = "";
        for(int i=0;i<id.length;i++){
            uidChar += id[i].to_string();
        }
        return uidChar;
    }

    public int getUniqueId(){
        return (int) this.id[0];
    }

    /**
     * Default constructor instantiate the class
     * immediately set unique id to class
     * the class must be parameterized
     */
    public Content(Document doc) {
        this.generateUid();
        map = new HashMap<string, Any>();
        // now we loop the heading
        this.createdOn = new GLib.DateTime.now_local().to_unix();
        this.doc = doc;
    }

    public void setEntry(string attributeName, Any any){
        map.set(attributeName, any);
        this.updatedOn = new GLib.DateTime.now_local().to_unix();
        this.doc.updatedOn = this.updatedOn;
    }


    public float? getFloatEntry(string attributeName) throws TypeErrorCasting{
        AttributeType type = this.doc.metadata.heading.get(attributeName).type;
        if(type == AttributeType.REAL){
            Any<float?> any = this.map.get(attributeName);
            float val = any.val;
            return val;
        }
        throw new TypeErrorCasting.NOT_FLOAT("This wasn't a float");
    }

    public double? getDoubleEntry(string attributeName) throws TypeErrorCasting{
        AttributeType type = this.doc.metadata.heading.get(attributeName).type;
        if(type == AttributeType.NUMERIC){
            Any<double?> any = this.map.get(attributeName);
            double val = any.val;
            return val;
        }
        throw new TypeErrorCasting.NOT_DOUBLE("This wasn't a double");
    }

    public string getStringEntry(string attributeName) throws TypeErrorCasting{
        AttributeType type = this.doc.metadata.heading.get(attributeName).type;
        if(type == AttributeType.NOMINAL){
            Any<string> any = this.map.get(attributeName);
            string val = any.val;
            return val;
        }
        throw new TypeErrorCasting.NOT_STRING("This wasn't a string");
    }
}

public errordomain TypeErrorCasting {
    NOT_FLOAT, NOT_DOUBLE, NOT_STRING
}


