#include <bits/stdc++.h>
using namespace std;
int n ,m;
vector<vector<int>>adj;
vector<int>vis;
vector<int>par;
int sv,ev;

bool dfs(int nod,int pa){
    vis[nod]=1;
    par[nod]=pa;
    
    for(auto id :adj[nod]){
        
        if(!vis[id]){
            if(dfs(id,nod)) return true;
        }else{
            if(id!=pa){
                sv=id;
                ev=nod;
                return true;
            }
            
        }
        
    }
    return false;
}

int main()
{
    cin>>n>>m;
    
    adj.resize(n+1);
    vis.assign(n+1,0);
    par.resize(n+1);
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int f=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,-1)) {f=1; break;}
        }
    } 
    
    if(!f) { cout<<"IMPOSSIBLE\n"; return 0; }
    
    vector<int>ans;
    ans.push_back( ev);
    int tem=ev;
    
    while(tem!=sv){
        ans.push_back(par[tem]);
        tem=par[tem];
    }
    
    ans.push_back(ev);
    
    cout<<ans.size()<<"\n";
    for(auto id:ans){
        cout<<id<<" ";
    }
    
    
    
    return 0;
}
