class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;

        for(int id :nums){
            m[id]++;
        }
    priority_queue<pair<int,int>>q;

        for(auto id :m){
            int a=id.first;
            int b=id.second;

            q.push({b,a});
        }
        vector<int>ans;
        while(k--){
            if(!q.empty()){
                    auto id =q.top();
                   ans.push_back(id.second);
                   q.pop();
            }
        }
    return ans;
    }
};
