 void rec(Node*root,int l,int r){
      if(root==NULL) return;
      if(l<=root->data) rec(root->left,l,r);
      if(l<=root->data && root->data<=r) ans++;
      if(r>=root->data) rec(root->right,l,r);
  }
    int getCount(Node *root, int l, int h) {
        ans=0;
        rec(root,l,h);
        return ans;
            }
