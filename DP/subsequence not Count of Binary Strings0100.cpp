

#include <bits/stdc++.h>
using namespace std;
int n;
int dp[1000001][4];
 int rec(int l,int state){
     //pruning 
     
     //base case
     if(l==0) return 1;
     //cache 
     if(dp[l][state]!=-1) return dp[l][state];
     //transition
     int ans=0;
     if(state<3){
         ans=rec(l-1,state)+rec(l-1,state+1);
     }else ans=rec(l-1,state);
     //save and return 
     return dp[l][state]=ans;
 }
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    cout<<rec(n,0);

    return 0;
}
