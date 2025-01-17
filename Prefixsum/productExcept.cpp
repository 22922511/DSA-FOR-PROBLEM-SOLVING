 vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        int right[n],left[n];
        right[0]=arr[0];
        left[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++){
            right[i]=right[i-1]*arr[i];
        }
        for(int i=n-2;i>=0;i--){
           left[i]=left[i+1]*arr[i];
        }
        
        vector<int >ans(n);
         
        
        for(int i=0;i<n;i++){
            
            int r=1,l=1;
            
            if(i-1>=0) r=right[i-1];
              
            if(i+1<n)l=left[i+1];
            
            ans[i]=r*l;
            
        }
        return ans;
        }
