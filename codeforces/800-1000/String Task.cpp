#include <bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin>>s;
     string ans="";
     for(int i=0;i<s.length();i++){
         if(s[i]!='A' && s[i]!='a' && s[i]!='E' && s[i]!='e' && s[i]!='I' && s[i]!='i'&& s[i]!='O' && s[i]!='o'  && s[i]!='U' && s[i]!='u' && s[i]!='Y' && s[i]!='y' )ans=ans+s[i];
     }
     
     for(int i=0;i<ans.length();i++){
         if(ans[i]>=65 && ans[i]<=90)  ans[i]=ans[i]+' ';
     }
     string res="";
     for(int i=0;i<ans.length();i++){
         res=res+'.'+ans[i]  ;
         }
     cout<<res<<"\n";
    
    return 0;
}
