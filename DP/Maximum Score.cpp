#include<bits/stdc++.h>
using namespace std;
#define int long long
 int n,m,k;
 int arr[101][101];
 int dp[101][101][12];

 bool check(int i ,int j){
    if(i<0 || j<0 || j>=m || i>=n) return 0;
    return 1;
 }
 int rec(int i,int j,int rem){
    //base
    if(i==0) {
        if(rem%k==0) return 0;
        else return -1e18;
    }
    //pruning

    //cache
    if(dp[i][j][rem]!=-1) return dp[i][j][rem];

    //transition
    int ans=-1e18;
    if(check(i-1,j-1)) ans=max(ans,rec(i-1,j-1,(rem+arr[i-1][j-1])%k)+arr[i-1][j-1]);
    if(check(i-1,j+1)) ans=max(ans,rec(i-1,j+1,(rem+arr[i-1][j+1])%k)+arr[i-1][j+1]);

    //save and return
    return dp[i][j][rem]=ans;
 }
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
     while(t--){
       
        cin>>n>>m>>k;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char ch;
                cin>>ch;
                arr[i][j]=ch-'0';
            }
        }
        memset(dp,-1,sizeof(dp));
        int ans=-1;
        for(int i=0;i<m;i++){
           int tem=(rec(n-1,i,arr[n-1][i]%k)+arr[n-1][i]);
           if(tem%k==0) ans=max(ans,tem);
        }
        cout<<ans<<"\n";
       
     }
    return 0;
}
