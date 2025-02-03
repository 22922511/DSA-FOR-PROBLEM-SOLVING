 int rec(Node*root){
        if(root==NULL) return 0;
       if(root->left ==NULL && root->right ==NULL) return 1;
       int ans=0;
       
       if(root->left) ans=rec(root->left);
        if(root->right) ans=max(ans,rec(root->right));
        
        return ans+1;
        
    }
    int height(Node* root) {
        int an=rec(root);
        return an-1;
    }
