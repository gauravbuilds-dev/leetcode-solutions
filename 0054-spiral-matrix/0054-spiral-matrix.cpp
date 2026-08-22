class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int Srow=0 , Scolumn=0;
        int Endrow=n-1,Endcolumn=m-1;
        vector<int>ans;
        while(Srow<=Endrow && Scolumn<=Endcolumn){
            // Top Boarder
            for(int j=Scolumn;j<=Endcolumn;j++){
                ans.push_back(matrix[Srow][j]);
            }
            // Right Boarder
            for(int i=Srow+1;i<=Endrow;i++){
                ans.push_back(matrix[i][Endcolumn]);
            }
            //  Bottom Boarder
            for(int j=Endcolumn-1;j>=Scolumn;j--){
                if(Srow==Endrow){
                    break;
                }
                ans.push_back(matrix[Endrow][j]);
            }
            // Left Boarder
            for(int i=Endrow-1;i>=Srow+1;i--){
                if(Scolumn==Endcolumn){
                    break;
                }
                ans.push_back(matrix[i][Scolumn]);
            }
            Srow++ ,Scolumn++;
            Endrow--;Endcolumn--;
        }
        return ans;
    }
};