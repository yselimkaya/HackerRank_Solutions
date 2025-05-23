/*
 * HackerRank Challenge: Linked Lists - Insert a Node at the Head
 *
 * Description:
 * This program defines a function to insert a new node at the **head** of a singly linked list.
 * The function creates a new node containing the given data, sets its `next` pointer
 * to the current head, and returns the new node as the new head of the list.
 *
 * If the original head is NULL (i.e., the list is empty), the new node becomes
 * the only node in the list and its `next` pointer is also set to NULL.
 *
 * Example:
 * Input:
 * 5
 * 383
 * 484
 * 392
 * 975
 * 321
 *
 * Execution:
 * NULL → 383
 * 383 → 484 → NULL
 * 392 → 484 → 383 → NULL
 * 975 → 392 → 484 → 383 → NULL
 * 321 → 975 → 392 → 484 → 383 → NULL
 *
 * Output:
 * 321
 * 975
 * 392
 * 484
 * 383
 *
 * Function Signature:
 * SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data);
 *
 * Parameters:
 * - head: A pointer to the current head of the list (may be NULL)
 * - data: The integer to be inserted in the new node
 *
 * Returns:
 * - A pointer to the new head node after insertion
 *
 * Constraints:
 * - Number of insertions n ≥ 0
 * - Data values are integers
 *
 * This exercise helps you practice pointer manipulation and understand
 * how insertion at the head works in dynamic, singly linked lists.
 *
 * Author: Yavuz Selim Kaya
 */


SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newNode->data = data;
    llist = newNode;
    newNode->next = temp;
    return newNode;
}

