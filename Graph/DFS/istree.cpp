int f=1;
  vector<int>vis;
  void dfs(int node,int par,vector<int>ad[]){
      vis[node]=1;
       
      for(int id :ad[node]){
          if(vis[id]==0) dfs(id,node,ad);
          else if(par!=id) f=0;
      }
  }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        f=1;
        if(m<n-1) return 0;
         vector<int>ad[n];
         for(int i=0;i<m;i++){
             int x=adj[i][0];
             int y=adj[i][1];
             
             ad[x].push_back(y);
             ad[y].push_back(x);
         }
         
  
      vis.assign(n,0);
      for(int i=0;i<n;i++) if(!vis[i]) dfs(i,-1,ad );
     
      return f;
    }
