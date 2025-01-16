int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    
    sort(A.begin(),A.end());
    
  priority_queue<int ,vector<int>,greater<int>>h;
  
  h.push(A[0][1]);
  int room=1;
  for(int i=1;i<n;i++){
      if(A[i][0]<h.top()) room++;
      else h.pop();
      h.push(A[i][1]);
  }
  
    return room;
}
