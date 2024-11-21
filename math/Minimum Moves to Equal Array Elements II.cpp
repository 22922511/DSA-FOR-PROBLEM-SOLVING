class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
         int n=nums.size();

        int mid=(n%2==0) ?(n+1)/2:n/2;
         int median=nums[mid];
         long long ans=0;
        for(auto id :nums){
            ans+=abs(id-median);
        }
        return ans;
    }
};
