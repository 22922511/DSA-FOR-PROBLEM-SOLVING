#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,w;
int point[1000],weigh[1000];
int dp[105][100005];

int rec(int level,int val){
    //pruning
    
    if(val==0) return 0;
    //base case
    if(level==n) return INT_MAX;
    
    // chache
    if(dp[level][val]!=-1) return dp[level][val];
    //transition
    int ans=rec(level+1,val);
    if(point[level]<=val){
        ans=min(ans,(rec(level+1,val-point[level])+weigh[level]));
    }
    //save and return
    return dp[level][val]= ans;
}
signed  main()
{
        cin>>n>>w;
        memset(dp,-1,sizeof(dp));
        for(int i =0;i<n;i++) {cin>>weigh[i];cin>>point[i];}
        
        for(int i=1e5;i>=0;i--){
            int wei=rec(0,i);
            if(wei<=w) {cout<<i<<"\n"; return 0;}
        }
        //cout<<ans<<"\n";

    return 0;
}
