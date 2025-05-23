/*
 * HackerRank Challenge: Linked Lists - Delete a Node
 *
 * Description:
 * This function deletes the node at a given position in a singly linked list and 
 * returns a pointer to the head of the updated list. Positioning uses zero-based indexing:
 * - Position 0 refers to the head node
 * - If the head is removed, the new head becomes the next node
 * - If the list becomes empty after deletion, NULL is returned
 *
 * Example:
 * Input list: 20 -> 6 -> 2 -> 19 -> 7 -> 4 -> 15 -> 9
 * Delete node at position 3 → Output list: 20 -> 6 -> 2 -> 7 -> 4 -> 15 -> 9
 *
 * Function Signature:
 * SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position);
 *
 * Parameters:
 * - llist: A pointer to the head node of the singly linked list
 * - position: The zero-based index of the node to be deleted
 *
 * Returns:
 * - A pointer to the head node of the updated linked list
 *
 * Constraints:
 * - The number of nodes is ≥ 0
 * - The given position is guaranteed to be valid
 *
 * This exercise builds your understanding of pointer manipulation,
 * memory management (free/delete), and list traversal.
 *
 * Author: Yavuz Selim Kaya
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(position == 0){
        free(llist);
        return llist->next;
    }
    
    SinglyLinkedListNode* iter = llist;
    for(int i = 0; i+1 < position; i++){
        iter = iter->next;
    }
    SinglyLinkedListNode* temp = iter->next->next;
    SinglyLinkedListNode* del = iter->next;
    iter->next = temp;
    free(del);
    return llist;
}
