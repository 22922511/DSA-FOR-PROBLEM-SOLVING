int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;

        for(int id :nums){
            if(m.find(id)==m.end()){
                m[id]++;
            }
            else return id;

        }
     return -1;   
    }
