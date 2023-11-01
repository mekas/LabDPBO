using Gee;
using GLib;
using Posix;

class Content: GLib.Object {
    private char[] id = new char[12];
    private uint32[] _id = new uint32[3];

    private static uint32 sequence = 0;
    public int64 createdOn { get; set;}
    public int64 updatedOn { get; set;}
    //keys are column heading, while values are the data rows
    private Gee.Map<string, Any> map;

    //we need a reference to parent class
    private weak Document doc;

     /**
     * Default constructor instantiate the class
     * immediately set unique id to class
     * the class must be parameterized
     */
    public Content(Document doc) {
        this.generateUid();
        map = new HashMap<string, Any>();
        this.createdOn = new GLib.DateTime.now_local().to_unix();
        this.doc = doc;

    }

    // to generate uid call here
    private void generateUid(){
        sequence += 1;
        _id[2] = sequence;
        GLib.DateTime dtime = new GLib.DateTime.now_local();
        int64 time = dtime.to_unix();
        uint64 utime = (uint64) time;
        _id[0] =  (uint32) (utime & 0xffffffff);
        _id[1] = GLib.Random.next_int();
        memcpy((void *)_id[0], (void *) id[0], 4*sizeof(char));
        memcpy((void *)_id[1], (void *) id[4], 4*sizeof(char));
        memcpy((void *)_id[2], (void *) id[8], 4*sizeof(char));
    }

    /*
     * Concatenate all char as string
     */
    public string getUid(){
        string ret = "";
        foreach(var ch in this.id){
            ret += ch.to_string();
        }
        return ret;
    }

    public Any? getEntry(string attributeName){
        
        return map.get(attributeName);
    }

    public float getFloatEntry(string attributeName){
        //get Metadata
        Metadata meta = this.doc.metadata;
        KeyMetadata keyMeta = meta.heading.get(attributeName);
        if(keyMeta.type == AttributeType.NUMERIC){
            Any<float?> any = this.getEntry(attributeName);
            return any.val;
        }
        throw new TypeError.NOT_FLOAT("The data wasn't a float");
    }

    public double getDoubleEntry(string attributeName){
        Metadata meta = this.doc.metadata;
        KeyMetadata keyMeta = meta.heading.get(attributeName);
        if(keyMeta.type == AttributeType.REAL){
            Any<double?> any = this.getEntry(attributeName);
            return any.val;
        }
        throw new TypeError.NOT_DOUBLE("The data wasn't a double");
    }

    public string getStringEntry(string attributeName){
        Metadata meta = this.doc.metadata;
        KeyMetadata keyMeta = meta.heading.get(attributeName);
        if(keyMeta.type == AttributeType.NOMINAL){
            Any<string> any = this.getEntry(attributeName);
            return any.val;
        }
        throw new TypeError.NOT_NOMINAL("The data wasn't a nominal");
    }

    public void setEntry(string attributeName, Any any){
        map.set(attributeName, any);
        this.updatedOn = new GLib.DateTime.now_local().to_unix();
        doc.updatedOn = this.updatedOn;
    }

    public uint32 getTimeStamp(){
        return this._id[0];
    }
}