
#include <bits/stdc++.h>
using namespace std;

#define ll int64_t
#define endl '\n'
vector<vector<int>>res;

vector< int>check(10,1);
vector< int>ans ;

void rec(int l,int sum,int k){
if(k==0){
    if(sum==0){
  res.push_back(ans);
    }
    return;
}
//choice
for(int i=l;i<=9;i++){
    if(check[i] && sum-i>=0){
      ans.push_back(i);
      check[i]=0;
      rec(i,sum-i,k-1);
      check[i]=1;
      ans.pop_back();
    }
}
}
vector<vector<int>> combinationSum(int k, int n) {
    res.clear();
    rec(1,n,k);
    return res;
}




void checker() {
    int k, n;
    cin >> k >> n;
    vector<int> t;
    auto v = combinationSum(k, n);
    for (auto &x : v) {
        sort(x.begin(), x.end());
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        for (auto y : x)cout << y << " ";
        cout << endl;
    }
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // int i = 1;
    // cin >> t;
    while (t--) {
        // cout << "Case #" << i << ": ";
        checker();
        // i++;
    }
    return 0;
}
