int ans;
     
    void rec(Node*root,int &l,int &k){
        if(root==NULL || ans!=-1) return ;
        
        if(root->left)rec(root->left,l,k);
        l++;  
        if(l==k){ ans=root->data; return;}
                  
          if(root->right)   rec(root->right,l,k);
    }
    int kthSmallest(Node *root, int k) {
        ans=-1;int l=0;
        rec(root,l,k);
        return ans;
    }
