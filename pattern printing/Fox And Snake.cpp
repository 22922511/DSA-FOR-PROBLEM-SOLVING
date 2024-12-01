#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n,m;
      cin>>n>>m;
      int f=0;
      for(int i=0;i<n;i++){
          
              if(i%2==0){
                  for(int j=0;j<m;j++) cout<<"#";
          }
          else if(f){
              cout<<"#";
               for(int j=0;j<m-1;j++)cout<<".";
               f=0;
          }else {
               
               for(int j=0;j<m-1;j++)cout<<".";
               cout<<"#";
               f=1;
               
          }
          cout<<"\n";
      }
      
 
    return 0;
}
