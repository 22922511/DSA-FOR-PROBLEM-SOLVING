class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int id1=-1,id2=-1;
        int cnt1=0,cnt2=0;

        for(int id :nums){
            if(id1==id){
                cnt1++;
            }else if(id2==id){
                cnt2++;
            }else if(cnt1==0){
                id1=id;
                cnt1=1;
            }else if(cnt2==0){
                id2=id;
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ans;
            cnt1=0;cnt2=0;
        for(auto id :nums){
            if(id==id1) cnt1++;
            if(id==id2) cnt2++;
        }

        if(cnt1>n/3 ) ans.push_back(id1);
        if(cnt2>n/3 && id1!=id2) ans.push_back(id2);

        return ans;
    }
};
