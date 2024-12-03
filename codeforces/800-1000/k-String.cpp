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
 

typedef long long li;
typedef long double ld;

using namespace std;
int n;

inline void read() {	
	cin >> n;
}

inline void solve() {
	 
	string s;
	cin>>s;
	
	map<char,int>m;
	
	for(char id :s) m[id]++;
	for(auto id :m){
	    if(id.y%n!=0) {cout<<-1<<"\n"; return ;}
	}
	
	string ans="";
for(auto id :m){
    ans += string(id.second / n, id.first);
}
int i=0;

for(i=0;i<n;i++) cout<<ans;

}

int main () {
 
     
    
    // int t; cin >> t;
    // while(t--) {
    	read();
    	solve();
    // }
   
}
