#include<bits/stdc++.h>
using namespace std;
#define int long long

 int n,m;
 int grid[202][202];
 int dp[202][202];

 int rectangle_area(int idx){
    int ans=0;

     int pre[n+1];
     int next[n+1];

     stack<int>st,st1;

     for(int i=1;i<=n;i++ ){

        while(!st.empty() && dp[i][idx]<=dp[st.top()][idx]) st.pop();

        if(st.empty()) pre[i]=0;
        else pre[i]=st.top();

        st.push(i);
     }

     for(int i=n;i>=1;i-- ){

        while(!st1.empty() && dp[i][idx]<=dp[st1.top()][idx]) st1.pop();

        if(st1.empty()) next[i]=n+1;
        else next[i]=st1.top();

        st1.push(i);
     }

for(int i=1;i<=n;i++){
  ans=max(ans,(next[i]-pre[i]-1)*dp[i][idx]);
}
return ans;
 }
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        cin>>n>>m;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>grid[i][j];
            }
        }
    memset(dp,0,sizeof(dp));
   int ans=-1e15;

      for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){

               if(grid[j][i]==0) dp[j][i]=0;
               else dp[j][i]=dp[j][i-1]+1;
            }
         ans=max(ans,rectangle_area(i));
        }
 
 cout<<ans<<"\n";

     }
    return 0;
}
