SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    if(position == 0){
        SinglyLinkedListNode* a = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        a->data = data;
        a->next = llist;
        return a;
    }else{
        int i;
        SinglyLinkedListNode* a = llist;
        for(i = 1; i < position; i++)
            a = a->next;
        SinglyLinkedListNode* tmp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        tmp->data = data;
        tmp->next = a->next;
        a->next = tmp;
        return llist;
    }
}
