 
#include <bits/stdc++.h>
using namespace std;
int n,m;
bool check(string s,string x){
    if(s.length()> x.length()) return false;
    
    for(int i=0;i<=x.length()-s.length();i++){
        if(x.substr(i,s.length())==s) return true;
    }
    return false;
}
int main()
{
 int t;
 cin>>t;
 while(t--){
     
     cin>>n>>m;
     
     string x,s;
     cin>>x>>s;
     
     int ans=-1;
      for(int i=0;i<=5;i++){
          if(check(s,x)) {
              ans=i;break;
          }
          x=x+x;
      }
     
      cout<<ans<<"\n";
     
 }

    return 0;
}
