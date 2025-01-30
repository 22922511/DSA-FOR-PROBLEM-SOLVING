 vector<pair<int,int>>move={{-2,1},{-2,-1},{2,1},{2,-1},{-1,2},{1,2},{1,-2},{-1,-2}};
 int n;
 
 bool check(int i,int j){
     if(i>=n || j>=n || i<0 || j<0) return false;
     return true;
 }
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{ n=N;
	    queue<vector<int>>q;
	    vector<vector<int>>grid(n,vector<int>(n,0)),vis(n,vector<int>(n,0));
	   
	    vis[KnightPos[0]-1][KnightPos[1]-1]=1;
	    grid[KnightPos[0]-1][KnightPos[1]-1]=0;
	    
	    q.push({KnightPos[0]-1,KnightPos[1]-1,0});
	    
	    
	    while(!q.empty()){
	        auto tem=q.front();
	        int i=tem[0];
	        int j=tem[1];
	        int d=tem[2];
	        
	        q.pop();
	        for(auto step :move ){
	            int x=i+step.first ,y=j+step.second;
	            
	            if( check(x,y)  && !vis[x][y] ){
	                vis[x][y]=1;
	                grid[x][y]=d+1;
	                
	                q.push({x,y,d+1});
	            }
	        }
	    }
	    return grid[TargetPos[0]-1][TargetPos[1]-1];
	}
