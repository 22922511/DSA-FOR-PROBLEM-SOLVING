vector<int>ans;
  void rec(Node*root){
      if(root==NULL) return;
      
      rec(root->left);
      ans.push_back(root->data);
      rec(root->right);
  }
    int findTarget(Node *root, int target) {
        // your code here.
        ans.clear();
        rec(root);
        int i=0,j=ans.size()-1;
        
        while(i<j){
            int sum=(ans[i]+ans[j]);
            if(target==sum) return true;
            else if(target>(sum)) i++;
            else j--;
        }
        return false;
    }
