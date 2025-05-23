/*
 * HackerRank Challenge: Linked Lists - Print the Elements of a Linked List
 *
 * Description:
 * This program traverses a singly linked list starting from the given head node
 * and prints the data value of each node, one per line.
 * If the head pointer is null, the function does nothing.
 *
 * Linked lists are dynamic data structures consisting of nodes, where each node
 * contains a data value and a pointer to the next node in the sequence.
 *
 * Example:
 * Input:
 * 2
 * 16
 * 13
 *
 * Linked List Representation:
 * 16 -> 13 -> NULL
 *
 * Output:
 * 16
 * 13
 *
 * Function Signature:
 * void printLinkedList(SinglyLinkedListNode* head);
 *
 * Parameters:
 * - head: A pointer to the first node of a singly linked list
 *
 * Constraints:
 * - The number of nodes is >= 0
 * - Each node contains an integer data value
 *
 * This exercise helps build foundational understanding of
 * pointer manipulation and traversal in linked list data structures.
 *
 * Author: Yavuz Selim Kaya
 */

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* iter = head;
    int sayim=0;
    while(temp != NULL){
        sayim++;
        temp = temp -> next;
    }    
    for(int i = 0; i<sayim; i++){
        printf("%d\n",iter->data);
        iter = iter -> next;
        
    }


}
