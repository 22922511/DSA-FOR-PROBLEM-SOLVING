#include<bits/stdc++.h>
using namespace std;

#define int long long
int  INF =1e15;
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int n,m,q;
     cin>>n>>m>>q;

     vector<vector<int>>dis(n+1,vector<int>(n+1,INF));
   
     for(int i=1;i<=m;i++){
            int a,b,c;
            cin>>a>>b>>c;
            dis[a][b]=min(dis[a][b],c);
            dis[b][a]=min(dis[b][a],c);
     }

     for(int i=1;i<=n;i++) dis[i][i]=0;

     for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
     }
     while(q--){
        int x,y;
        cin>>x>>y;

        int ans=dis[x][y];
        if(ans==INF)cout<<-1<<"\n";
        else cout<<ans<<"\n";
     }
    return 0;
}
