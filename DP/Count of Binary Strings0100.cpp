#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
 int mod=1000000007;
 int dp[1000001][4];
int rec(int l,int state){
    //base case
    if(l==0) return 1;

if(dp[l][state]!=-1) return dp[l][state];

//transition
int ans=0;
    if(state==0){
       ans= (rec(l-1,1)%mod+rec(l-1,0)%mod)%mod;
    }else if(state==1){
       ans= (rec(l-1,2)%mod+rec(l-1,1)%mod)%mod;
    }
    else if(state==2){
       ans= (rec(l-1,0)%mod+rec(l-1,3)%mod)%mod;
    }else {
       ans= rec(l-1,2)%mod;
    }
    //save and return 
    return dp[l][state]=ans;
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t ;
     cin>>t;
      for(int i=0;i<1000001;i++){
        for(int j=0;j<=3;j++){
            dp[i][j]=-1;
        }
       }
     while(t--){
       
        cin>>n;
       
       int ans=rec(n,0); 
       cout<<ans<<"\n";
     }
    return 0;
}
