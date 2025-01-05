#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,w;
int point[1000],weigh[1000];
int dp[101][100001];

int rec(int level,int wleft){
    //pruning
    //base case
    if(level==n) return 0;
    // chache
    if(dp[level][wleft]!=-1) return dp[level][wleft];
    //transition
    int ans=rec(level+1,wleft);
    if(weigh[level]<=wleft){
        ans=max(ans,(rec(level+1,wleft-weigh[level])+point[level]));
    }
    //save and return
    return dp[level][wleft]= ans;
}

vector<int>seq;
void print(int l, int wleft){
    if(l==n) return;
    int dontput=rec(l+1,wleft);
    if(wleft>=weigh[l]){
        int put=rec(l+1,wleft-weigh[l])+point[l];
        
        if((put>dontput)) {
            seq.push_back(l);
            cout<<l<<" ";
            print(l+1,wleft-weigh[l]);
        }else{
             print(l+1,wleft);
        }
    }else {
        print(l+1,wleft);
    }
}

signed  main()
{
        cin>>n>>w;
        memset(dp,-1,sizeof(dp));
        for(int i =0;i<n;i++) {cin>>weigh[i];cin>>point[i];}
        int ans=rec(0,w);
        cout<<ans<<"\n";
        print(0,w);
        //for(int id:seq) cout<< id<<"  ";

    return 0;
}
