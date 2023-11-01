bool isContentEqual(Content a, Content b){
    return a.getUid() == b.getUid();
}

int compareContent(Content a, Content b){

    return a.getUniqueId() - b.getUniqueId();
}