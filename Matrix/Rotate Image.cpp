class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        for(int i=0;i<r;i++){
            for(int j=i;j<c;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
     
      for(int i=0;i<r;i++){

        int l=0,k=c-1;

        while(l<k){
            swap(matrix[i][l],matrix[i][k]);
            l++;
            k--;
        }
      }
    }
};
