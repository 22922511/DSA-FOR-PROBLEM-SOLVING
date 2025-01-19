#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int>edge[200005];

int dep[200005];
void dfs(int node,int depth,int par){
    dep[node]=depth;

    for( int id:edge[node]){
        if(id!=par){
            dfs(id,depth+1,node);
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     
     cin>>n;
      

     for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
     }
     dfs(1,0,0);
     int ans=1;
     for(int i=2;i<=n;i++){
        if(dep[i]>dep[ans]) ans=i;
     }
 dfs(ans,0,0);
  ans=1;
  
     for(int i=2;i<=n;i++){
        if(dep[i]>dep[ans]) ans=i;
     }
cout<<dep[ans]<<"\n";
    return 0;
}
