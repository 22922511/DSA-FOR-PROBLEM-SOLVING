vector<int>ans;
  void rec(Node*root){
      if(root==NULL) return;
      
      if(root->left) rec(root->left);
      ans.push_back(root->data);
      if(root->right) rec(root->right);
  }
    int kthLargest(Node *root, int k) {
        ans.clear();
        rec(root);
        int n=ans.size();
       return ans[n-k];
    }
