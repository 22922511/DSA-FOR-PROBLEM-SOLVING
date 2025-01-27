 vector<pair<int,int>>move={{1,0},{0,1},{-1,0},{0,-1}};
     vector<vector<int>>vis;
    bool isValid(int i,int j,int n,int m){
        if(i>=n || i<0 || j>=m ||j<0) return false;
        return true;
    }
    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid,int old,int newc){
        vis[i][j]=1;
        grid[i][j]=newc;
        for(auto id :move){
            int x=id.first+i; int y=id.second+j;
            if(isValid(x,y,n,m) && !vis[x][y] && grid[x][y]==old){
                dfs(x,y,n,m,grid,old,newc);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>&grid, int sr, int sc,
                                  int newColor) {
        int n=grid.size();
        int m=grid[0].size();
        
        vis.assign(n,vector<int>(m,0));
         dfs(sr,sc,n,m,grid,grid[sr][sc],newColor);
         
         
        return grid;
    }
