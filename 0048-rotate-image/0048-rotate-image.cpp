class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // by Tfu striver
        // 1st step
        // transpose of matrix
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // 2nd step
        // reverse every row 
        for(int i=0;i<n;i++){
            // row is mat[i]
            reverse(matrix[i].begin(),matrix[i].end());
        }
       
    }
};