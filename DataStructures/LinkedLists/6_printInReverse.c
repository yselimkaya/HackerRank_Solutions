/*
 * HackerRank Challenge: Linked Lists - Print in Reverse
 *
 * Description:
 * This function receives a pointer to the head of a singly linked list and prints
 * the data values of the nodes in reverse order (from tail to head). 
 * If the list is empty, nothing is printed.
 *
 * The goal is to traverse the list and reverse the output without modifying the list structure.
 *
 * Input:
 * Multiple test cases. For each test case:
 * - An integer n denoting the number of elements
 * - n lines, each containing a single integer to be inserted into the list
 *
 * Output:
 * For each test case, print the list elements in reverse order, each on a new line.
 * No extra lines between test cases.
 *
 * Example:
 * Input:
 * 3
 * 5
 * 16 12 4 2 5
 * 3
 * 7 3 9
 * 5
 * 1 18 3 13 5
 *
 * Output:
 * 5
 * 2
 * 4
 * 12
 * 16
 * 9
 * 3
 * 7
 * 5
 * 13
 * 3
 * 18
 * 1
 *
 * Function Signature:
 * void reversePrint(SinglyLinkedListNode* head);
 *
 * Constraints:
 * - Each list has at least 0 and at most 1000 elements.
 * - Data values are integers in a reasonable range.
 *
 * This challenge builds understanding of recursion, arrays, and stack-based traversal
 * in singly linked lists.
 *
 * Author: Yavuz Selim Kaya
 */

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* iter = llist;
    SinglyLinkedListNode* temp = llist;
    int count=0;
    while(iter != NULL){
        iter = iter -> next;
        count++;
    }
    int arr[count];
    for(int i = 0; i<count; i++){
        arr[i] = temp -> data;
        temp = temp -> next;
    }    
    for(int i = count-1; i >= 0; i--){
        printf("%d\n",arr[i]);
    }
}

