SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
{
  SinglyLinkedListNode *n = new SinglyLinkedListNode(data);
  n->data = data;
  n->next=llist;
  return llist = n;  
}
}
