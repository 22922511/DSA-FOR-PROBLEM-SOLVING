vector<int>ans,vis;
  int f=1;
  void dfs(int node,vector<vector<int>>&adj){
  vis[node]=1;
  for(int id:adj[node])  if(!vis[id] ) dfs(id,adj);
  if(f) ans.push_back(node);
  }
  
    int kosaraju(vector<vector<int>> &adj) {
      
      vis.assign(adj.size(),0);
     
      for(int i=0;i<adj.size();i++) if(!vis[i]) dfs(i,adj);
          
      vis.assign(adj.size(),0);
      
      vector<vector<int>>readj;
      readj.resize(adj.size());
      
      for(int i=0;i<adj.size();i++){
          for(int id:adj[i]){
              readj[id].push_back(i);
          }
      }
      int scc=0;
      f=0;
      reverse(ans.begin(),ans.end());
      for(int id:ans){
          if(!vis[id]) {
              scc++;
              dfs(id,readj);}
      }
      
      return scc;
    }
