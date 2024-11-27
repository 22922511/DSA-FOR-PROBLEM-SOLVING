vector<vector<int>>move={{1,0},{0,1},{-1,0},{0,-1}};
  
  bool isvalid(int x,int y,int n,int m){
      return (x>=0 && y>=0 && x<n && y<m);
  }
   void dfs(int x,int y,vector<vector<int>> &grid,vector<vector<int>> &vis,int n ,int m ){
       vis[x][y]=1;
       for(auto id :move){
           int r=x+id[0];
           int c=y+id[1];
           if(isvalid(r,c,n,m) && grid[r][c]==1  && !vis[r][c]){
               dfs(r,c,grid,vis,n,m);
           }
       }
   }
   
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n =grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    vis[i][j]=1;
                } 
            }
        }
        
        for(int i=0;i<n;i++){
            if(grid[i][0]==1 && !vis[i][0]){
                dfs(i,0,grid,vis,n,m);
            }if(grid[i][m-1]==1 && !vis[i][m-1]){
                  dfs(i,m-1,grid,vis,n,m);
            }
        }
        
         for(int i=0;i<m;i++){
            if(grid[0][i]==1 && !vis[0][i]){
                dfs(0,i,grid,vis,n,m);
            }if(grid[n-1][i]==1 && !vis[n-1][i]){
                  dfs(n-1,i,grid,vis,n,m);
            }
        }
        int ans=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==0) ans++;
            }
         }
        return ans;
    }
