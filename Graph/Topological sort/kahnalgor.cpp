class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indeg(numCourses,0);
        vector<vector<int>>adj;
        vector<int>ans;
        adj.resize(numCourses);

        for(auto id : prerequisites){
            int a=id[0];
            int b=id[1];
            adj[a].push_back(b);
            indeg[b]++;
        }
        queue<int>q;

        for(int i=0;i<numCourses;i++)
        {
            if(indeg[i]==0) q.push(i);
        }

        while(!q.empty()){
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for(auto id :adj[x]){
                indeg[id]--;
                if(indeg[id]==0) q.push(id);
            }
        }
// reverse(ans.begin(),ans.end());
 if(ans.size()==numCourses) return ans;

        return {}; 
    }
};
