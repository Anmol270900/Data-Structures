/*
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* current;
    SinglyLinkedListNode* afternode;
    int i;

    if(head == NULL)
    {
        head = node;
        node->next = NULL;
    }
    current = head;
    for(i = 0; i < position - 1; i++)
    {
        current = current->next;
    }
    afternode = current->next;
    current->next = node;
    node->next = afternode;
    return head;

}
