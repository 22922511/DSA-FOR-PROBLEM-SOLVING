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

int n;

inline void read() {	
 	cin >> n;
}

inline void solve() {
    int l=0,
    sum=0;
    while(1)
    {
        sum+=l*(l+1)/2;
        if(sum>n) break;l++;
    }
    cout<<l-1<<"\n";
}
int32_t main () {
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int t; cin >> t;
    // while(t--) {
    	read();
    	solve();
    //}
    //cerr << "TIME: " << clock() << endl;
}
