
#include <bits/stdc++.h>
using namespace std;
string a,b;
int dp[30001][3001];
int rec(int i,int j){
    //pruning
    if(i>=a.size() || j>=b.size()) return 0;
    //base case
    
    //cache check
    if(dp[i][j]!=-1) return dp[i][j];
    
    //transition
    int ans=0;
    if(a[i]==b[j]) ans=max(ans,1+rec(i+1,j+1));
    else {
        int l=rec(i+1,j);
        int r=rec(i,j+1);
        ans=max(l,r);
    }
    
    //save and return
     return dp[i][j]=ans;
    
 }
 void generate(int i,int j){
     if(i>=a.size() || j>=b.size()) return ;
       if(a[i]==b[j]) {
           cout<<a[i]<<"";
           generate(i+1,j+1);
       }else {
            int l=rec(i+1,j);
            int r=rec(i,j+1);
            if(l>r) generate(i+1,j);
            else generate(i,j+1);
       }
     
 }
int main()
{ cin>>a>>b;
for(int i=0;i<=3000;i++){
    for(int j=0;j<=3000;j++){
        dp[i][j]=-1;
    }
}

generate(0,0);
    return 0;
}
