vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int l=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        if(l==n) return {-1,-1};
        
        int r=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        //if(arr[r-1]!=x) return {-1,-1};
        return {l,r-1};
        
        
    }
