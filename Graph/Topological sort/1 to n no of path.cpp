#include<bits/stdc++.h>
using namespace std;
#define int long long
 vector<vector<int>>g;
 int n,m;
 int dp[100001];
 int rec(int node){
  //pruning
  //base
    if(node==n) return 1;
  //cache
  if(dp[node]!=-1)  return dp[node];
  //transition
  int ans=0;
  for(int id :g[node]){
ans+=(rec(id));
  }
  //save and return
  return dp[node]=ans;
 }
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     cin>>n>>m;
     memset(dp,-1,sizeof(dp));

     for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
     }
     int ans=0;
     ans=rec(1);
     cout<<ans<<"\n";
    return 0;
}
