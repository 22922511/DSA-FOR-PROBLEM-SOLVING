unordered_set<string>ans;
  vector<int>str;
   string res="";
   
  void rec(int i,string&s){
      //pruning
      //base
      if(i==s.length()){
          ans.insert(res);
          return ;
      }
      //tarnsition
      for(int l=0;l<s.length();l++){
          if(str[l]){
              res+=s[l];
              str[l]=0;
              rec(i+1,s);
              str[l]=1;
              res=res.substr(0,res.length()-1);
              
          }
      }
      //choice
      //check
  }
    vector<string> findPermutation(string &s) {
     str.assign(s.length(),1);
     vector<string>op;
     
     rec(0,s);
     
     for(auto id :ans){
         op.push_back(id);
     }
     return op;
    }
