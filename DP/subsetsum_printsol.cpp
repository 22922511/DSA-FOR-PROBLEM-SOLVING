#include <bits/stdc++.h>
using namespace std;
#define int long long
int t,n;
int arr[100005];
int dp[10005][10005];
bool rec(int l,int tarleft){
    //pruning
    //base
    if(l==n  ) {
        if(tarleft==0)return 1;
        else return 0;
    }
    //cache
    if(dp[l][tarleft]!=-1)  return dp[l][tarleft];
    //transition
    int f=0;
    if(rec(l+1,tarleft)) f=1;
    if(rec(l+1,tarleft-arr[l]))  f=1;
    //save store
     return dp[l][tarleft]=f;
}

void print(int l,int tarleft){
    if(l>=n) return;
    
    if(rec(l+1,tarleft)==1) { 
        print(l+1,tarleft);
    }
    else if(rec(l+1,tarleft-arr[l])==1) {
        cout<<l<<" ";
        print(l+1,tarleft-arr[l]);
    }
     
}
signed main()
{
    cin>>n>>t;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++) cin>>arr[i];
    //cout<<rec(0,t);
    print(0,t);

    return 0;
}
