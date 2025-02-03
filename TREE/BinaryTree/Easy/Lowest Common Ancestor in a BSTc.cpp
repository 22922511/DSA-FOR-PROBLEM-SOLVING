vector<Node*>a,b;
  
  void rec(Node*root,int k,vector<Node*>&ans){
      if(root ==NULL   ) return ;
      if( root->data==k) {ans.push_back(root); return ;}
      
      if(root->data>k) {ans.push_back(root); rec(root->left,k,ans);}
      if(root->data<k) {ans.push_back(root); rec(root->right,k,ans);}
      
  }
    Node* LCA(Node* root, Node* n1, Node* n2) {
        a.clear(); b.clear();
        
        rec(root,n1->data,a);
        
        rec(root,n2->data,b);
        
      
        int i=0;
        Node* res;
        while(i<a.size() && i<b.size() && a[i]==b[i]){
            res=a[i];
            i++;
        }
        return res;
    }
