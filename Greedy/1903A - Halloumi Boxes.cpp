#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int f=0;
        
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(i && arr[i]<arr[i-1]) f=1;
        }
        
        if(k<=1 && f ) { cout<<"NO\n";
        }
        else cout<<"YES\n";
        
    }

    return 0;
}
