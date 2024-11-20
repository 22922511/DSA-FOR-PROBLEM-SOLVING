/////////////optimat solution
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){

            if(buy>prices[i]){
                buy=prices[i];
            }else if(profit<(prices[i]-buy)){
                profit=prices[i]-buy;
            }
        }
        return profit;
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////using priority queue
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

       priority_queue<int>st;
       vector<int>ans(n);

       for(int i=n-1;i>=0;i--){
           if(!st.empty() && prices[i]<st.top()){
            ans[i]=st.top();
           }  else{
            ans[i]=-1;
           }   
        st.push(prices[i]);
       }
int res=0;
       for(int i=0;i<n;i++){
        res=max(res,(ans[i]-prices[i]));
       }
    return max(res,0);
    }
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
