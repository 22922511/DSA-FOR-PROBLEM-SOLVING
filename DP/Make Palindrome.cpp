#include<bits/stdc++.h>
using namespace std;
#define int long long
 string s;
int n;
vector<vector<int>>dp;
int rec(int i,int j){
    //pruning
    //base case
    if(i==j || i>j) return 0;

    //cache check
    if(dp[i][j]!=-1) return dp[i][j];

    //transition
    int ans=1e18;
    if(s[i]==s[j]) ans=min(ans,rec(i+1,j-1));
        ans=min(ans,rec(i,j-1)+1);
        ans=min(ans,rec(i+1,j)+1);
        
    //save and return
    return dp[i][j]=ans;

}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        cin>>s;
        n=s.length();
        dp.assign(n+1,vector<int>(n+1,-1));
        int ans=rec(0,n-1);
        cout<<ans<<"\n";
     }
    return 0;
}
