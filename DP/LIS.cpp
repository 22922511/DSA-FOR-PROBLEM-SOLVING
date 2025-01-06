#include <bits/stdc++.h>
using namespace std;
int n;
int arr[2501];
int dp[2501];
int rec(int l ){
   //base case
    if(l==n ) return 0;
    // dp check
    if(dp[l]!=-1) return dp[l];
    //transition
    int ans=1;
    for(int last=l-1;last>=0;last--){
        if(arr[last]<arr[l]){
            ans=max(ans,1+rec(last));
        }
    }
    return dp[l]=ans;
}
int main()
{
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans=1;
    for(int i=0;i<=2500;i++){
        ans=max(ans,rec(i));
    }
    cout<<ans<<"\n";

    return 0;
}
