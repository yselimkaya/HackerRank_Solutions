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
