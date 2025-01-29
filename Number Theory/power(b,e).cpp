  double power(double b, int e) {
        int sign=1,l=1;
       if(e<0) { sign=-1; e=abs(e);}
         if(b<0) { l=-1; l=abs(l);}
        double ans=1;
        while(e){
            if(e%2) { ans*=b;e--;}
            else{
                b=b*b;
                e/=2;
            }
        }
        if(sign==-1) return 1/ans;
    return ans;
    }
