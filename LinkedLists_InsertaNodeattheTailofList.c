SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    if(head == NULL){
        SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
        head = newNode;
        newNode->data = data;
        newNode->next = NULL;
        }
    else{    
    SinglyLinkedListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }    
    temp->next = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp->next->data = data;
    }
    return head;
}
