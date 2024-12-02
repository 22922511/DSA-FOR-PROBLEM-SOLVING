#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int n; cin>>n;
    
   
    int i=0;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    while(i<n){
        int j=i;
        while(i+1<n && arr[i]<arr[i+1]) i++;
        ans=max(ans,i-j+1);
        i++;
    }
   cout<<ans<<"\n";
    return 0;
}
