DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    DoublyLinkedListNode *temp = NULL;  
    DoublyLinkedListNode *current = llist;
      
     while (current !=  NULL)
     {
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;              
       current = current->prev;
     }      
      
     if(temp != NULL )
        llist = temp->prev;
    
    return llist;
    
}
