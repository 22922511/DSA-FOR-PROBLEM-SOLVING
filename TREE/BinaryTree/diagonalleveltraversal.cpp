map<int,vector<int>>m;
void check(Node*root,int d){
    if(root==NULL) return;

    m[d].push_back(root->val);
    check(root->left,d-1);
    check(root->right,d);

}

vector<vector<int>> getDiagonalLevelorderTraversal(Node* root) {
    vector<vector<int>>ans;
    if(root==NULL) return ans;
   m.clear();

   check(root,0);

for( auto id :m){
    ans.push_back(id.second);
}
return ans;
}
