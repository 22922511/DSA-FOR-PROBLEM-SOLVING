bool detectLoop(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL ) return false;
        
        Node*slow=head;
        Node*fast=head->next->next;
        
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
