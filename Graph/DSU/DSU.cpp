 #include<bits/stdc++.h>
using namespace std;
#define int long long
 int n,q;
vector<int>par,renk;
 int find(int x){
    if(par[x]==x) return x;
    return par[x]=find(par[x]);
 }
 void merge(int x,int y){
    int l=find(x);
    int r=find(y);
    if(l==r) return;

    if(renk[l]>=renk[r]){
        renk[l]+=renk[r];
        par[r]=l;
    }else {
        renk[r]+=renk[l];
        par[l]=r;
    }
 }
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>q;

    par.assign(n+1,0);
    renk.assign(n+1,1);
    for(int i=1;i<=n;i++) {par[i]=i;}

    while(q--){
        int que,a,b;
        cin>>que>>a>>b;
        if(que==0){
            merge(a,b);
        }else if(que==1){
          int l=find(a);
          int r=find(b);
          if(l==r)cout<<1<<"\n";
          else cout<<0<<"\n";
        }

    }
    return 0;
}
