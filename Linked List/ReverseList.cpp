
    Node* reverseList(struct Node* head) {
         
        if(head ==NULL  || head->next==NULL)  return head;
        
        Node *tem=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        
        return tem;
    }
