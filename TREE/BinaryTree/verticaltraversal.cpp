 vector<vector<int>> verticalTraversal(TreeNode *root) {
        vector<vector<int>>ans;
         map<int, vector<pair<int, int>>>colm;
         queue<pair<TreeNode*, pair<int, int>>>q;
         q.push(make_pair(root, make_pair(0, 0)));

        while(!q.empty()){
           auto id =q.front();
            q.pop();
            
            if(id.first){
                colm[id.second.first].push_back(make_pair(id.second.second,id.first->val));
                q.push(make_pair(id.first->left,make_pair(id.second.first-1,id.second.second+1)));
                q.push(make_pair(id.first->right,make_pair(id.second.first+1,id.second.second+1)));
            }
        }
        for(auto id : colm) {
           sort(id.second.begin(),id.second.end());
           vector<int>tem;
           for(auto x:id.second){
            tem.push_back(x.second);
           }
            ans.push_back(tem);
        }
        return ans;

    }
