class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int N=nums.size();
    vector<int>ans;
        for(int i=0;i<N;i++){
            if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
            else nums[abs(nums[i])-1]*=-1;
        }
        return ans;
    }
};
