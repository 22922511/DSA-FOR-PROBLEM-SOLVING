int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        int n=arr.size();
        
       int ans=-1;
       int i=0,j=n-1,m=0;
       
       while(i<=j){
           m=(i+j)/2;
           
           if(arr[m]<1+m+k){
               ans=m;
               i=m+1;
           }else j=m-1;
       }
        
        
        
        if(ans<0) return k;
        return k+ans+1;
    }
