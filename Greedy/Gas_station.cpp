int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
int n=A.size();

int pending_gas=0;
int ans=0;
int t_cost=0;
int t_gas=0;
for(int i=0;i<n;i++){
    t_cost+=B[i];
    t_gas+=A[i];
}
if(t_gas<t_cost) return -1;
for(int i=0;i<n;i++){
     
     pending_gas+=A[i]-B[i];
     if(pending_gas<0){
         pending_gas=0;
         ans=i+1;
     }
}
return  ans;

}
