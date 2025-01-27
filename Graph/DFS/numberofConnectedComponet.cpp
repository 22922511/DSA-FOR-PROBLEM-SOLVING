#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>edge;
vector<int>parent;
map<int,int>ma;
void dfs(int node,int par){
    ma[par]++;
    parent[node]=par;
    for(int id :edge[node]){
        if(!parent[id]){
            dfs(id,par);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    //resize
    edge.resize(n+1);
    parent.assign(n+1,0);
    //input
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

 int cnt=0;
 //call
 for(int i=1;i<=n;i++){
     if(!parent[i]){
         cnt++;
         dfs(i,cnt);
     }
 }
 cout<<cnt<<"\n";
 for(auto id :ma) cout<<id.second<<"\n";
    return 0;
}
