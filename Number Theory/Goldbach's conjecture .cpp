#include <iostream>
#include <sstream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <string>
#include <cstring>
#include <cassert>
#include <iomanip>
#include <algorithm>
#include <set>
#include <map>
#include <ctime>
#include <cmath>
#include<bits/stdc++.h>

#define forn(i, n) for(int i=0;i<n;++i)
#define fore(i, l, r) for(int i = int(l); i <= int(r); ++i)
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define x first
#define y1 ________y1
#define y second
#define ft first
#define sc second
#define pt pair<int, int>

template<typename X> inline X abs(const X& a) { return a < 0? -a: a; }
template<typename X> inline X sqr(const X& a) { return a * a; }

typedef long long li;
typedef long double ld;
#define int long long 
using namespace std;
vector<int> primearr;

void prime(int N){
 
vector<bool>sieve(N+1,1);
sieve[0]=sieve[1]=0;

for(int i=2;i*i<=N;i++){
    if(sieve[i]){
        for(int j=i*i;j<=N;j+=i) sieve[j]=0;
    }
}
for(int i=2;i<=90000000;i++){
        if(sieve[i])  primearr.push_back(i);
    }
}
bool checkprime(int n){
  for(int i=2;i*i<=n;i++){
        if(n%i==0){ return 0;}
    }  
    return 1;
}
int n;

inline void read() {	
 cin >> n;
}

inline void solve() {
     if(checkprime(n)) { cout<<1<<"\n"; return ;}
     if(checkprime(n-2)) { cout<<2<<"\n"; return ;}
     
     if(n%2==0) cout<<2<<"\n";
     if(n%2) cout<<3<<"\n";
    
    
    	  
    	 
}
int32_t main () {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   // prime(90000000);
    int t=1; 
    //cin >> t;
    while(t--) {
    	read();
    	solve();
    }
    //cerr << "TIME: " << clock() << endl;
}
