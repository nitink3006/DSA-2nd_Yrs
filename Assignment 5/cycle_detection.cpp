bool has_cycle(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode  *slowp = head, *fastp = head;
 
    while (slowp && fastp && fastp->next)
    {
        slowp = slowp->next;
        fastp  = fastp->next->next;
 
        if (slowp == fastp)
        {
            return 1;
        }
    }

    return 0;

}
