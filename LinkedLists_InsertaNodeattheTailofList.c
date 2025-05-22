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
