SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *abs = llist;
    
    int pos = 0;
    
    if(position==0)
    {
        llist=llist->next;
        delete (abs);
    }
    else
    {
        while(position!=pos)
        {
            ++pos;
            prev=abs;
            abs=abs->next;
        }
        
        if(abs!=NULL)
        {
            prev->next=abs->next;
            delete (abs);
        }
    }
    return llist;
}
