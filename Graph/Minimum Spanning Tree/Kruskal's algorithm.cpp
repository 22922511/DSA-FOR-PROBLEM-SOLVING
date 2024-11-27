	static bool comp(vector<int>&a,vector<int>&b){
	    return a[2]<b[2]; 
	}
	vector<int>par;
	
	int find(int x){
	    if(par[x]==x) return x;
	    return par[x]=find(par[x]);
	    
	}
	void merge(int x,int y){
	    int l=find(x);
	    int r=find(y);
	    if(l==r) return;
	    par[l]=r;
	    return;
	}
    int spanningTree(int V, vector<vector<int>> gp[]){
        
        par.resize(V);
        for(int i=0;i<V;i++) par[i]=i;
        vector<vector<int>>adj;
        
        
        for (int u = 0; u < V; u++) {
            for (auto& it : gp[u]) {
                int v = it[0];  // Adjacent node
                int w = it[1];  // Weight of the edge
                adj.push_back({u, v, w});
            }
        }
        
        int n=V;
        sort(adj.begin(),adj.end(),comp);
        int c=0,ans=0;
        for(vector<int>&id:adj){
            if(c>=n-1) break;
            int d=id[2];
            int v=id[0];
            int u=id[1];
            
            int x=find(v);
            int y=find(u);
            if(x!=y){
                merge(u,v);
                ans+=d;
                c++;
            }
        }
      return ans;  
    }
