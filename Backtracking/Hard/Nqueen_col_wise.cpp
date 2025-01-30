 int n;
  vector<int>queen;
  vector<vector<int>>ans;
  
  bool check(int ro,int col){
      for(int pcol=0;pcol<col;pcol++){
          int pro=queen[pcol]-1;
          
          if(pro==ro || abs(pro-ro)==abs(col-pcol)) return false;
      }
      return true;
  }
  
 
  void rec(int col){
      //pruning
      //base
      if(col==n){
          ans.push_back(queen);
          return;
      }
      //transition
      for(int ro=0;ro<n;ro++){
          if(check(ro,col)){
              queen[col]=ro+1;
              rec(col+1);
              queen[col]=0;
          }
      }
      //choice
      //check
      //return
  }
    vector<vector<int>> nQueen(int a) {
        ans.clear();
        queen.clear();
           n=a;
     queen.assign(a,0);
   
      rec(0);
      return ans;
    }
