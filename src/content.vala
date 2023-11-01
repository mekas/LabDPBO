using Gee;

class Content: GLib.Object {
    public uint64 uid { get; set; default=-1;}
    //private char[] _id = new char[12];
    private uint32[] id = new uint32[3];
    private static uint32 sequence = 0;
    public uint64 createdOn { get; set; }
    public uint64 updatedOn { get; set; }
    //keys are column heading, while values are the data rows
    private Gee.Map<string, Any> map;

    // to generate uid call here
    private void generateUid(){
        sequence += 1;
        id[2] = sequence;
        GLib.DateTime dtime = new GLib.DateTime.now_local();
        int64 time = dtime.to_unix();
        uint64 utime = (uint64) time;
        id[0] =  (uint32) (utime & 0xffffffff);
        id[1] = GLib.Random.next_int();
    }

    /**
     * Default constructor instantiate the class
     * immediately set unique id to class
     * the class must be parameterized
     */
    public Content() {
        this.generateUid();
        map = new HashMap<string, Any>();
        // now we loop the heading
    }

    public void insertEntry(string attributeName, Any any){
        map.set(attributeName, any);
    }
}


