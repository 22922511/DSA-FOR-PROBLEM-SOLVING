vector<int>vis;
  bool f=true;
  void dfs(int nod,int par,vector<vector<int>>& adj){
      vis[nod]=par;
      for(int id :adj[nod]){
          if(!vis[id]) dfs(id,3-par, adj);
          else if(vis[id]==par) f=false;
      }
  }
    bool isBipartite(vector<vector<int>>& adj) {
       vis.assign(adj.size()+1,0);
       f=true;
       for(int i=0;i<adj.size();i++){
           if(!vis[i] ) dfs(i,1,adj);
       }
       return f;
    }
