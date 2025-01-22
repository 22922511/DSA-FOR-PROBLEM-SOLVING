Node* rev(Node*root){
      if(root==NULL  || root->next==NULL) return root;
      
      Node*tem=rev(root->next);
      root->next->next=root;
      root->next=NULL;
      
      return tem;
  }
    Node* addTwoLists(Node* num1, Node* num2) {
     
     Node*a=rev(num1);
     Node*b=rev(num2);
     Node *new_head=new Node(0);
     Node*tem=new_head;
     
     int carry=0,sum=0;
     
     while(a && b){
         sum=( a->data+b->data +carry )%10;
         carry =( a->data+b->data +carry )/10;
         
         Node *wast=new Node(sum);
         tem->next=wast;
         tem=tem->next;
         
         a=a->next;  b=b->next;
     }
     
     while(a){
         sum=( a->data +carry )%10;
         carry =( a->data +carry )/10;
         
         Node *wast=new Node(sum);
         tem->next=wast;
         tem=tem->next;
         
         a=a->next;
     }
      while(b){
         sum=( b->data +carry )%10;
         carry =( b->data +carry )/10;
         
         Node *wast=new Node(sum);
         tem->next=wast;
         tem=tem->next;
         
         b=b->next;
     }
     if(carry) {
          Node *wast=new Node(carry);
         tem->next=wast;
         tem=tem->next;
     }
     Node*ans=rev(new_head->next);
     
     while(ans!=NULL && ans->data==0) ans=ans->next;
    
     return ans;
    }
