int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int count = 0;
    
    SinglyLinkedListNode *abs = llist;
    
    while(abs!=NULL)
    {
        ++count;
        abs=abs->next;
    }
    
    count = count-positionFromTail;
    
    abs=llist;
    --count;
    
    while(count!=0)
    {
        --count;
        abs=abs->next;
    }
    
    return abs->data;
}
