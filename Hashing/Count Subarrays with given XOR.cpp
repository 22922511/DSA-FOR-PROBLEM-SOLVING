long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int pre[arr.size()+1];
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]^arr[i-1];
        }
        map<int,int>m;
        int ans=0;
        for(int id:pre){
            ans+=m[id^k];
            m[id]++;
        }
        return ans;
    }
