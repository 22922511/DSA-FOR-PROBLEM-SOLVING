

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int ans=n;
        
        int i=0;
        for(;i<n;i++){
            if(s[i]=='1'){
                break;
            }
        }
        
        int j=n-1;
        for(;j>=0;j--){
             if(s[j]=='1'){
                break;
            }
        }
        
        if(i==n || j==-1) cout<<n<<"\n";
        else {
            int l=max(2*(i+1),2*(n-i));
            int r=max(2*(j+1),2*(j-n));
        ans=max(ans,max(l,r));
        cout<<ans<<"\n";
    }
    }

    return 0;
}
