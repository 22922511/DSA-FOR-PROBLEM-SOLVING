#include<bits/stdc++.h>
using namespace std;
#define int long long
 string a,b;
 int n,m;
int dp[1005][1005],pos[1005][1005];
 int rec(int i, int j){
    //base 
    //pruning
    if(i==n) return 1e15;
    if(j==m) return 1;
     

    //cache check
    if(dp[i][j]!=-1) return dp[i][j];

    //transition
 int k=pos[i][j];
//  for(k=j;k<m;k++) if(a[i]==b[k]) break;    
int ans=1e15;
if(k==m) ans=1;
else ans=min(rec(i+1,j),rec(i+1,k+1)+1);
    //save and return
    return dp[i][j]=ans;
    
 }
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        cin>>a>>b;
       for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            dp[i][j]=-1;
        }
       }

        n=a.length();
        m=b.length();
        for(int i=n-1;i>=0;i--){
    int p=m;
        for(int j=m-1;j>=0;j--){
            if(a[i]==b[j]) p=j;
            pos[i][j]=p;
        }
       }
        int ans=rec(0,0);
        if(ans>=1e15)cout<<-1<<"\n";
       else cout<<ans<<"\n";
     }
    return 0;
}
