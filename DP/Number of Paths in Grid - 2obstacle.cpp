#include <bits/stdc++.h>
using namespace std;
//#define int long long
int mod=1000000007;
int n,m,k;
int arr[201][201];
int dp[201][201][401];
int rec(int i,int j,int k){
    //pruning 
     if(arr[i][j]==1 && k==0) return 0;
    if(i>=n || j>=m) return 0;
    
    //base case
    if(i==n-1 && j==m-1) return 1 ;
    
    //cache check
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    
    //transition
      int ans=0;
       if(arr[i][j]==0) ans=(rec(i+1,j,k)+rec(i,j+1,k))%mod;
      if(arr[i][j]==1  && k>0){
          ans = (rec(i + 1, j, k - 1) + rec(i, j + 1, k - 1)) % mod;
      }

    //save and store
    return dp[i][j][k]=ans;
    
}
signed main()
{
    int t;
    cin>>t;
    while(t--){
     cin>>n>>m>>k;
     for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int l = 0; l <= k; l++)
            {
                dp[i][j][l] = -1;
            }
        }
    }
     
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            
             cin>>arr[i][j];
         }
     }

cout<<rec(0,0,k)<<"\n";}
    return 0;
}
