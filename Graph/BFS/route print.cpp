#include <bits/stdc++.h>
using namespace std;
int n ,m;
vector<vector<int>>adj;
vector<int>vis;
vector<int>par;
int sv,ev;

 

int main()
{
    cin>>n>>m;
    
    adj.resize(n+1);
    vis.assign(n+1,0);
    par.assign(n+1,-1);
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
   
   queue<int>q;
   q.push(1);
   vis[1]=1;
   
   while(!q.empty()){
       int nod=q.front();
       q.pop();
       
       for(auto id:adj[nod]){
           if(!vis[id]){
               vis[id]=1;
               par[id]=nod;
               q.push(id);
           }
       }
   }
   
   
    if(par[n]==-1) { cout<<"IMPOSSIBLE\n"; return 0; }
    
    vector<int>ans;
    ev=n;
    sv=1;
    ans.push_back( ev);
    int tem=ev;
    
    while(tem!=sv){
        ans.push_back(par[tem]);
        tem=par[tem];
    }
    
    reverse(ans.begin(),ans.end());
    
    cout<<ans.size()<<"\n";
    for(auto id:ans){
        cout<<id<<" ";
    }
    
    
    
    return 0;
}
