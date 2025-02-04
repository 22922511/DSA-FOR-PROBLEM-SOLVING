vector<int>ans;
  
  void rec(Node*root,int l,int r){
      if(root==NULL) return;
      
      if(l<=root->data) rec(root->left,l,r);
        if(l<=root->data && root->data<=r) ans.push_back(root->data);
        
        if(root->data<=r) rec(root->right,l,r);
      
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
     
     ans.clear();
     rec(root,low,high);
     return ans;
    }
