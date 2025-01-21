vector<int>ans;

void inorder(Node*root){
    if(root==NULL) return ;

    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
}
int getKthElement(Node* node, int k)
{   
    if(k<=ans.size()) return ans[k-1];

    return -1;
}
