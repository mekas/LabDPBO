using GLib;
using Gee;

class Document: GLib.Object{
    public string name;
    private static int uid=0;
    private Gee.List<Content> list;// = new Content<double?>();
    public Metadata metadata{get;set;}
    public int64 createdOn;
    public int64 updatedOn;
    private Gee.Map<string, Content> map;

    /**
     * initialize empty values of rows
     */
    public Document(){
        //if not given
        //this.name = name;
        metadata = new Metadata();
        GLib.Math.pow(10,2);
        uid++;
        list = new Gee.UnrolledLinkedList<Content>(isContentEqual);
        createdOn = new GLib.DateTime.now_local().to_unix();
        map = new HashMap<string, Content>();
    }

    public void buildIndex(){
        //loop through all content/rows to get the uid
        foreach(var content in list){
            string uid = content.getUid();
            map.set(uid, content);
        }
    }

    public void buildAlternateIndex(){
        //call sort for the current in order to loop by order
        this.list.sort(compareContent);
        
    }

    public Content? getContentByUidThroughIndex(string uid){
        return map.get(uid);
    }

    public Content? getContentByUid(string uid){
        foreach(var content in list){
            if(content.getUid() == uid)
                return content;
        }
        return null;
    }

    public void insertData(string line){
        // break data by comma delimiter
        // then read metadata to arrange collection by metadata type
        string[] word = line.split(",");
        // return an immutable heading keys which we'll be using to loop'
        Content array = new Content(this);
        foreach(var entry in metadata.heading){
            //read the type of attribute type first
            AttributeType type = metadata.heading.get(entry.key).type;
            switch(type){
                case AttributeType.NUMERIC:
                    double val = double.parse(word[entry.value.index]);
                    Any<double?> any = new Any<double?>(val);
                    array.setEntry(entry.key, any);
                    break;
                case AttributeType.REAL:
                    float val  = float.parse(word[entry.value.index]);
                    Any<float?> any = new Any<float?>(val);
                    array.setEntry(entry.key, any);
                    break;
                case AttributeType.NOMINAL:
                    string val  = (word[entry.value.index]);
                    Any<string> any = new Any<string>(val);
                    array.setEntry(entry.key, any);
                    break;
            }
        }
        list.add(array);
    }

    public int getInstanceCount(){
        return list.size;
    }

    public Gee.Set<string> getAttribute(){
        Gee.Set<string> set = this.metadata.heading.keys;
        return set;
    }
}
