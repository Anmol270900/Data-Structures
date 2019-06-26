 /*
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* pre, *after;

    if(position == 0)
    {
        pre = head;
        head = pre->next;
        free(pre);
    }
    else
    {
       
        for(int i = 0; i < position - 1; i++)
            current = current->next;
        pre = current;
        current = current->next;
        after = current->next;
        pre->next = after;
        free(current);
    }

    return head;

    

}
