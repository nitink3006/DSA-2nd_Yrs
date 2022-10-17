SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* newN=new SinglyLinkedListNode(data);
    newN->next=NULL;
    newN->data=data;
    if(temp==NULL)
        return newN;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newN;
    return head;
}
