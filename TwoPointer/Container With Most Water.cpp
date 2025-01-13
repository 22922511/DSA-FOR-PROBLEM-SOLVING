int maxWater(vector<int> &arr) {
        // code here
        int i=0,j=arr.size()-1;
        int ans=0;
        while(i<j){
            ans=max(ans,abs(i-j)*min(arr[i],arr[j]));
            
            if(arr[i]<arr[j]) i++;
            else if(arr[i]>arr[j]) j--;
            else  i++,j--;
        }
        return ans;
    }
