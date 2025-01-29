#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>edge;
vector<int>col,parent;
//int f=0;
void dfs(int node,int pa){
    col[node]=1;
    parent[node]=pa;
    
    for(int id :edge[node]){
        if(!col[id]) dfs(id,node);
        
        else if(col[id]==1) {
            int tem=node;
            while(tem!=id){
                 cout<<tem<<" ";
                tem=parent[tem];
            }
            cout<<id<<"\n";
        }
    }
    col[node]=2;
}
int main()
{
    int n,m;
    cin>>n>>m;
    edge.resize(n+1);
    col.assign(n+1,0);
    parent.assign(n+1,0);
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
    }
    dfs(1,0);
// if(f) cout<<"YES\n";
// else cout<<"NO\n";
    return 0;
}
