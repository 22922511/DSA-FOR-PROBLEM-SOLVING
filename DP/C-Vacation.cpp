#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int arr[100006],brr[100006],crr[100006];
int dp[100006][2][2][2];
 int rec(int l,int a,int b,int c){
     // base case
     if(l==n) return 0;
     
     //cache
     if(dp[l][a][b][c]!=-1) return dp[l][a][b][c];
     
     //transition
     int ans=INT_MIN;
     if(a) ans=max(ans,rec(l+1,0,1,1)+arr[l]);
     if(b) ans=max(ans,rec(l+1,1,0,1)+brr[l]);
     if(c) ans=max(ans,rec(l+1,1,1,0)+crr[l]);
     // store and return
     return dp[l][a][b][c]=ans;
 }
signed main()
{
cin>>n;
memset(dp,-1,sizeof(dp));

for(int i=0;i<n;i++){
     int x,y,z;
     cin>>x>>y>>z;
     arr[i]=x; brr[i]=y; crr[i]=z;
}
cout<<rec(0,1,1,1);

    return 0;
}
