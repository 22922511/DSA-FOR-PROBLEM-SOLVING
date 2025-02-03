vector<int>ans;
  void rec(Node*root){
      if(root==NULL) return;
      
      if(root->left) rec(root->left);
      ans.push_back(root->data);
      if(root->right) rec(root->right);
  }
float findMedian(struct Node *root)
{
        ans.clear();
        rec(root);
        int n=ans.size();
        if(n%2) return ans[n/2];
        float x=(ans[n/2]+ans[(n-1)/2])/2.0;
        return x;

}
