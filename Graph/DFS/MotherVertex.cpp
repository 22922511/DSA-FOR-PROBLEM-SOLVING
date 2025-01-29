 vector<int>vis;
    void dfs(int node,vector<int>adj[]){
        vis[node]=1;
        for(int id :adj[node]){
            if(!vis[id]) dfs(id,adj);
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    int ans=-1;
	    vis.assign(V,0);
	    for(int i=0;i<V;i++){
	        if(!vis[i])  {
	            dfs(i,adj);
	            ans=i;
	        }
	    }
	    vis.assign(V,0);
	    dfs(ans,adj);
	    for(int i=0;i<V;i++){
	        if(!vis[i]) return -1;
 	    }
	     return ans;
	}
