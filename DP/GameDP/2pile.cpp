#include <bits/stdc++.h>
using namespace std;

int A,B;
int dp[100][100];

int rec(int a, int b){
    //pruning
    //base 
    if(a==0 && b==0) return 0;
    
    //cache check
    if(dp[a][b]!=-1) return dp[a][b];
    
    //transition
    int ans=0;
    
    for(int x=0;x<a;x++){
        if(rec(x,b)==0) {
            ans=1;
            break;
        }
    }
    for(int y=0;y<b;y++){
        if(rec(a,y)==0) {
            ans=1;
            break;
        }
    }
     for(int z=1;z<=min(a,b);z++){
        if(rec(a-z,b-z)==0) {
            ans=1;
            break;
        }
    }
    //save and return
    return dp[a][b]=ans;
    
}
 
int main()
{
    cin>>A>>B;
    memset(dp,-1,sizeof(dp));
    cout<<rec(A,B);

    return 0;
}
