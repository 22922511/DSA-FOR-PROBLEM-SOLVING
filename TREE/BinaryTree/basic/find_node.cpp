bool search(Node* root, int x) {
  if(root==NULL) return false;
  
  if(root->data ==x) return true;
  
  return root->data > x ? search(root->left,x) : search(root->right,x);
}
