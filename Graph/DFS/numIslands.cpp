vector<pair<int,int>>move={{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
     vector<vector<int>>vis;
    bool isValid(int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m ||j<0) return false;
        return true;
    }
    void dfs(int i,int j,int n,int m,vector<vector<char>>& grid){
        vis[i][j]=1;
        for(auto id :move){
            int x=id.first+i; int y=id.second+j;
            if(isValid(x,y,n,m) && !vis[x][y] && grid[i][j]=='1'){
                dfs(x,y,n,m,grid);
            }
        }
    }
   
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vis.assign(n,vector<int>(m,0));
        int cnt=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]  && grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return cnt;
    }
