 Node* succe(Node*root,int k){
        
        if(root==NULL) return NULL;
        Node*suc=NULL;
        while(root){
            if(root->key>k){
               suc=root;
                root=root->left;
            } else root=root->right;
        }
        return suc;
    }
    
    Node* pred(Node*root,int k){
        
        if(root==NULL) return NULL;
        Node*suc=NULL;
        while(root){
            if(root->key<k){
               suc=root;
                root=root->right;
            } else root=root->left;
        }
        return suc;
    }
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int k)
    {
      pre=pred(root,k);
      suc=succe(root,k);
    }
