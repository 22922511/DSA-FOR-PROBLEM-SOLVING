    stack<int>st;
        
        vector<int>ans;
        
        for(int i=0,j=1;j<n;i++,j++){
            bool f=0;
            if(arr[i]>arr[j]) st.push(arr[i]);
            
            else{
                while(!st.empty() && arr[j]>st.top()) {f=true;st.pop();}
            }
            
            if(f) ans.push_back(arr[i]);
        }
      ans.push_back(arr[n-1]);
     return ans;
    }
