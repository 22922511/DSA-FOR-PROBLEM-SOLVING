class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.length();
        int ans=0;
        int j=0;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            while(m.size()<(i-j+1)) {
                m[s[j]]--;
                if(m[s[j]]==0){
                    m.erase(s[j]);
                }
                j++;
            }
            ans=max(ans,i-j+1);
            
        }
        return ans;
    }
};
