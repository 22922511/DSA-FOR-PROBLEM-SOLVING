#include <bits/stdc++.h>
using namespace std;
int n,m;
Cconst long long int INF=1e17; // important line
vector<vector<int>>gp;
vector<int>dis;

vector<int> bell(int start){
     dis[start]=0;
     for(int i=0;i<n;i++){
         
         for(vector<int>dist:gp){
             int u = dist[0];
             int v = dist[1];
             int d = dist[2];
             
             if(dis[u]!=INF && dis[v]>dis[u]+d){
                 if(i==n-1) return {-1};
                 dis[v]=dis[u]+d;
             }
         }
     }
     return dis;
}
int main()
{
   cin>>n>>m;
   dis.assign(n,INF);
   
   for(int i=0;i<m;i++){
       int a,b,c;
       cin>>a>>b>>c;
       gp.push_back({a,b,c});
   }
bell(0);
for(int id:dis) cout<<id<<" ";

 
    return 0;
}
