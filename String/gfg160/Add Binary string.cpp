 int n1=s1.length();
        int n2=s2.length();
        int i=n1-1,j=n2-1;
        string s="";
        int cr=0;
        
        while( i>=0 && j>=0){
            
            int a=s1[i]=='1' ? 1 :0;
            int b=s2[j]=='1' ? 1 :0;
        
            int bi=(a+b+cr)%2;
             cr=(a+b+cr)/2;
            s=to_string(bi)+s;
            i--;j--;
        }
        
        while(i>=0) {
           int a=s1[i]=='1' ? 1 :0;
              
            int bi=(a+cr)%2;
            cr=(a+cr)/2;
            s=to_string(bi)+s;
            i--;
        }
        while(j>=0) {
         int b=s2[j]=='1' ? 1 :0;
              
            int bi=(b+cr)%2;
            cr=(b+cr)/2;
            s=to_string(bi)+s;
            j--;
        }
        if(cr==1) s='1'+s;
        
        int p=0;
        while(p<s.length() && s[p]=='0') p++;
        
        if(p==s.length()) return "0";
        
         return s.substr(p);
    }
