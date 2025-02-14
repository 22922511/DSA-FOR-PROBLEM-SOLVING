#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>g;
int n,m;
int dp[100002];
int rec(int nd){
    //pruning
    
    //base
    //cache
    if(dp[nd]!=-1) return dp[nd];
    //transition
    int ans=0;
    for(int id:g[nd]){
        ans=max(ans,1+rec(id));
    }
    //save and return
    return dp[nd]=ans;
}
signed main()
{
    cin>>n>>m;
    g.resize(n+1);
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
    g[a].push_back(b);
        
    }
    memset(dp,-1,sizeof(dp));
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,rec(i));
    }
    // if(ans==0 || ans==1) cout<<ans<<"\n";
    // else cout<<ans-1<<"\n";
    cout<<ans<<"\n";
    return 0;
}
