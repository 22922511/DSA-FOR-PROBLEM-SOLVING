int isbst=1;
vector<int> check(Node*root){
    if(root==NULL) return {inf,-inf};

    vector<int>lef =check(root->left);
    vector<int>rig =check(root->right);

    if(root->val<=lef[1]) isbst=0;
    if(root->val>=rig[0]) isbst=0;

return {min(lef[0],root->val),max(rig[1],root->val)};
}
bool isBst(Node* root) {
   isbst=1;
   vector<int>waste=check(root);
return isbst;
}
