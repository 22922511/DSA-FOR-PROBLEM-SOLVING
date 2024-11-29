///https://www.codechef.com/problems/CHEFRECP?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    
	    int arr[n];
	    unordered_map<int,int>m;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    
	    unordered_set<int>s;
	    
	    int i=0;
	    int f=0;
	    while(i<n){
	        if(s.find(arr[i])!=s.end()) {f=1; break; }
	        while(i+1<n && arr[i]==arr[i+1]){s.insert(arr[i]);i++;}
	        s.insert(arr[i]);
	        i++;
	    }
	    
	    vector<pair<int,int>>p;
	    for(auto id :m){
	        p.push_back({id.second,id.first});
	    }
	    
	    sort(p.begin(),p.end());
	    
	    int num=0;
	    for(auto id :p){
	        if(num==id.first) { f=1; break;}
	        num=id.first;
	    }
	    if(f) cout<<"NO\n";
	    else cout<<"YES\n";
	}

}
