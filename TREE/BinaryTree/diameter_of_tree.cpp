 
int check(TreeNode*root ,int &ans){
    if(root==NULL) return 0;

        int l=check(root->left,ans);
        int r=check(root->right,ans);
        ans=max(ans,l+r+1);
        return max(l,r)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
    int res=check(root,ans);
        return  ans-1;
    }
 
