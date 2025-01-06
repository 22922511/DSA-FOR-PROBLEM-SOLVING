#include <bits/stdc++.h>
using namespace std;
int n,m;
int arr[2501][2501];
int dp[2501][2501];
int done[2501][2501];
bool check(int i,int j){
    if(i>=n || j>=m) return 1;
    return 0;
}
int rec(int i,int j){
    if(check(i,j)) return INT_MIN;
    if(i==n-1 && j==m-1) return arr[i][j];
    if(done[i][j])return dp[i][j];
    
        int ans=max(rec(i+1,j),rec(i,j+1))+arr[i][j];
    
    return dp[i][j]=ans;
}
int main()
{
cin>>n>>m;
memset(dp,-1,sizeof(dp));

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
        done[i][j]=0;
    }
}
cout<<rec(0,0);

    return 0;
}
