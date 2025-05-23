/*
 * HackerRank Challenge: Linked Lists - Insert a Node at a Specific Position
 *
 * Description:
 * This function inserts a new node with a given integer value at a specified position
 * in a singly linked list. The position uses zero-based indexing, where:
 * - Position 0 refers to the head of the list
 * - Position 1 refers to the second node, and so on
 *
 * If the head is NULL, the new node becomes the only element in the list.
 *
 * Example:
 * Initial list: 16 -> 13 -> 7
 * Insert 1 at position 2 → Result: 16 -> 13 -> 1 -> 7
 *
 * Function Signature:
 * SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position);
 *
 * Parameters:
 * - head: Pointer to the head node of the list
 * - data: Integer value to store in the new node
 * - position: The zero-based index at which to insert the node
 *
 * Returns:
 * - Pointer to the head of the updated list
 *
 * Author: Yavuz Selim Kaya
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* iter = llist;
    for(int i = 1; i < position; i++){
        iter = iter->next;
    }
    SinglyLinkedListNode* temp = iter->next;
    newNode->data = data;
    iter->next = newNode;
    newNode->next = temp;
    return llist;
}
