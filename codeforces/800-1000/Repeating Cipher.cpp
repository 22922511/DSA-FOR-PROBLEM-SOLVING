#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     string s;
     cin>>s;
     string ans="";
     int i=1;
     while((i*(i+1)/2-1)<=n){
         ans+=s[i*(i+1)/2-1];
         i++;
     }
     cout<<ans<<"\n";
    
    return 0;
}
