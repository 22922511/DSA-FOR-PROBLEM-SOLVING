#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int arr[100006];
int dp[100006];
 int rec(int l ){
     // pruning
     
     // base case
     if(l==n-1) return 0;
     
     //cache
     if(dp[l]!=-1) return dp[l] ;
     
     //transition
     int ans=INT_MAX;
      for(int i=1;i<=m;i++){
         if(l+i<n) ans=min(ans,rec(l+i)+abs(arr[l+i]-arr[l]));
      }
     // store and return
     return dp[l] =ans;
 }
signed main()
{
cin>>n>>m;
memset(dp,-1,sizeof(dp));

for(int i=0;i<n;i++){
     int x;
     cin>>x;
     arr[i]=x;  
}
cout<<rec(0);

    return 0;
}
