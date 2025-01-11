#include <bits/stdc++.h>
using namespace std;
int n;
double arr[3001];
double dp[3001][1501];
bool vis[3001][1501];
double rec(int l,int k){
    // base case
    
    if(l==n) return  1.0;
    //cache
    if(vis[l][k]) return dp[l][k];
    vis[l][k]=true;
    
    //transition
            double ans=0;
     if(k>0)ans+=double(rec(l+1,k-1))*(1.0-arr[l]);
            ans+=double(rec(l+1,k))*(arr[l]);
    
    //save and return
    return dp[l][k]=ans;
}

int main()
{
     cin>>n;
     memset(dp,-1,sizeof(dp));
     memset(vis,false,sizeof(vis));
     
     for(int i=0;i<n;i++) cin>>arr[i];
     cout<<setprecision(10)<<rec(0,n/2);

    return 0;
}
