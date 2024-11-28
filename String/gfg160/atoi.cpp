int myAtoi(char *s) {
        int sign=1;int  ten=10;
        long long int ans=0;
        int i=0;
        
        while(s[i]==' ' || s[i]=='\t') i++;
        
            if(s[i]=='-') {sign=-1;i++;  }
            if(s[i]=='+') {sign=1; i++; }
            
            while(s[i]>='0' && s[i]<='9'){
                if(sign*(ans*10+(s[i]-'0'))>INT_MAX) return INT_MAX;
                if(sign*(ans*10+(s[i]-'0'))<INT_MIN) return INT_MIN;
                ans=ans*10+(s[i]-'0');
            
            i++;
        }
        ans=ans*sign;
        
        return ans;
    }
