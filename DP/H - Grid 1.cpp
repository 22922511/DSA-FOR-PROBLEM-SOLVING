#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod=1000000007;
int n,m;
char arr[1005][1005];
int dp[1005][1005];
int rec(int i,int j){
    //pruning 
    if(arr[i][j]=='#' ) return 0;
    if(i>=n || j>=m) return 0;
    
    //base case
    if(i==n-1 && j==m-1) return 1 ;
    
    //cache check
    if(dp[i][j]!=-1) return dp[i][j];
    
    //transition
    int r=rec(i+1,j)%mod;
    int d=rec(i,j+1)%mod;
    int ans=(r+d)%mod;
    
    //save and store
    return dp[i][j]=ans;
    
}
signed main()
{
     cin>>n>>m;
     memset(dp,-1,sizeof(dp));
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>arr[i][j];
         }
     }

cout<<rec(0,0)<<"\n";
    return 0;
}
