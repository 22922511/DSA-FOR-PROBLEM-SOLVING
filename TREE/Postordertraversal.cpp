
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int>ans;
void post(Node*root){
    if(root==NULL) return;

   post(root->left);
   post(root->right);
    ans.push_back(root->val);
   
}
vector<int> getPostorderTraversal(Node* root) {
    ans.clear();
    post(root);
    return ans;
}


Node* getBinaryTree(vector<int> &num, int*ind) {
    if(num[*ind] == -1)
        return NULL;
    Node* node = new Node(num[*ind]);
    (*ind)++;
    node->left = getBinaryTree(num,ind);
    (*ind)++;
    node->right = getBinaryTree(num,ind);
    return node;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        assert(n<=1000000);
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ind = 0;
        Node* tree = getBinaryTree(arr,&ind);
        vector<int> ans = getPostorderTraversal(tree);
        for(auto v:ans){
            cout<<v<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
