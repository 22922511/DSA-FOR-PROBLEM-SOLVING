bool check(int arr[],int n,int m,int d){
      int res=1;
      int tem=m;
      for(int i=0;i<n;i++){
          if(arr[i]<=tem) tem-=arr[i];
          else {
              res++;
              tem=m;
              if(arr[i]>tem) return false;
              else tem-=arr[i];
          }
      }
      return res<=d ? true : false;
  }
    int leastWeightCapacity(int arr[], int n, int d) {
      long long i=0,j=100000006,m;
       
       int ans=0;
       while(i<=j){
           m=i+(j-i)/2;
           if(check(arr,n,m,d)){
               ans=m;
               j=m-1;
           }else i=m+1;
       }
       return ans;
    }
};
