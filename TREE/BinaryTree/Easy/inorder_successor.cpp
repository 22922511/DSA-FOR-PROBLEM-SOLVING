//link::https://algo.monster/liteproblems/285

int inOrderSuccessor(Node *node, Node *x) {
        if(node==NULL || x==NULL) return -1; 
      Node*root=node;
      int ans=-1;
      
      while(root){
          if(root->data>x->data){
              ans=root->data;
              root=root->left;
          }root=root->right;
      }
      return ans;
    }
