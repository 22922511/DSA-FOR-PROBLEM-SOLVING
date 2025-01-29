 vector<int>parent;
    int find(int x){
        if(x==parent[x] )return x;
        return parent[x]=find(parent[x]);
    }
  void  merge(int x,int y){
        x=find(x);
        y=find(y);
        
       if(x!=y) parent[x]=y;
    }
	int detectCycle(int V, vector<int>adj[])
	{
	    parent.assign(V,0);
        for(int i=0;i<V;i++) { parent[i]=i;}
        
        for(int i=0;i<V;i++){
             
        for(auto id :adj[i]){
            if(i<id){
            if(find(i)==find(id)){
                return true;
            }else   merge(i,id);
        }
        }
        
        }
        return false;
	}
