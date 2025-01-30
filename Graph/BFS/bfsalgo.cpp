vector<int> bfsOfGraph(vector<vector<int>> &adj) {
     int n=adj.size();
     vector<int>vis(adj.size(),0);
     
     vector<int>ans;
 
     queue<int>q;
     vis[0]=1;
     q.push(0);
     ans.push_back(0)
;     while(!q.empty()){
         int nod=q.front();
         q.pop();
         for(int id :adj[nod]){
             if(!vis[id]){
                 vis[id]=1;
                 ans.push_back(id);
                 q.push(id);
             }
         }
     }
     
     return ans;
    }
