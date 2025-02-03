int rec(Node*root){
        if(root==NULL) return 0;
        
        if(root->left==NULL && root->right==NULL) return root->data;
        
        int ans=root->data;
        if(root->left) ans=min(ans,rec(root->left));
        if(root->right) ans=min(ans,rec(root->right));
        
        return ans;
    }
    int minValue(Node* root) {
        int ans=rec(root);
        
        return ans;
    }
