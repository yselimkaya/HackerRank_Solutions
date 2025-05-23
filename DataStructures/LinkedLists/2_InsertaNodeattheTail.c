/*
 * HackerRank Challenge: Linked Lists - Insert a Node at the Tail
 *
 * Description:
 * This program defines a function that inserts a new node with a given data value
 * at the tail (end) of a singly linked list. If the list is initially empty
 * (i.e., the head pointer is null), the new node becomes the head of the list.
 *
 * The function traverses the list to find the last node and appends the new node
 * to its `next` pointer, thus maintaining the order of insertion.
 *
 * Example:
 * Input:
 * 5
 * 141
 * 302
 * 164
 * 530
 * 474
 *
 * Output:
 * 141
 * 302
 * 164
 * 530
 * 474
 *
 * Final Linked List:
 * 141 -> 302 -> 164 -> 530 -> 474 -> NULL
 *
 * Function Signature:
 * SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data);
 *
 * Parameters:
 * - head: A pointer to the head of the linked list
 * - data: Integer value to insert as the data of the new tail node
 *
 * Returns:
 * - Pointer to the head of the updated linked list
 *
 * Constraints:
 * - The number of insertions n is ≥ 0
 * - Data values are integers within the valid range
 *
 * This problem reinforces understanding of dynamic memory allocation,
 * pointer manipulation, and basic operations on singly linked lists.
 *
 * Author: Yavuz Selim Kaya
 */

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL){
        return newNode;
        }
       
    SinglyLinkedListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }    
    temp->next = newNode;
    temp->next->data = data;
    
    return head;
}



