class Solution {
 public:
  int n;
        int m;
  bool isvalid(int x,int y){
      if(x>=n || y>=m || x<0 ||  y<0 ) return 0;
      return 1;
  }
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        vector<pair<int,int>>move={{1,0},{0,1},{-1,0},{0,-1}};
        
        queue<vector<int>>q;
          n=mat.size();
          m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(mat[i][j]==2){
                        q.push({i,j,0});
                        vis[i][j]=2;
                    }
                }
            }
        
        int t=0;
        while(!q.empty()){
            auto id =q.front();
            q.pop();
            int x=id[0]; int y=id[1]; int z=id[2];
            t=max(t,z);
            
            for(auto id : move){
                int x1=id.first;
                int y1=id.second;
                if(isvalid(x+x1,y+y1) &&  mat[x+x1][y+y1]==1  && vis[x+x1][y+y1]==0){
                    vis[x+x1][y+y1]=2;
                    q.push({x+x1,y+y1,t+1});
                    
                }
                
            }
        }
          for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(vis[i][j]!=2 && mat[i][j]==1) return -1;
                }}
        return t;
    }
};
