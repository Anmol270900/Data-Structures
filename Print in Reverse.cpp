/*
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */


void reversePrint(SinglyLinkedListNode* head) {
    if(head != nullptr)
    {
        reversePrint(head -> next);
        cout << head -> data << endl;
    }
}
