SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* current;


    if(llist == NULL)
    {    
        llist = node;
        node -> next = NULL;
    }
    else
    {
        current = llist;
        llist = node;
        node -> next = current;
    }

    return llist;

}
