#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long  n,k,w;
   cin>>k>>n;
 long long year=0;
 while(1){
     if(k>n) {break;}
     n*=2;
     k*=3;
     year++;
 }
  cout<<year<<"\n";
    return 0;
}
