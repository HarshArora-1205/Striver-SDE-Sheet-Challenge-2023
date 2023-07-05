class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = -1;
        for(int i = 0; i < m; i++){
            if(target <= matrix[i][n-1]){
                row = i;
                break;
            }
        }
        if(row != -1){
            for(int j = 0; j < n; j++){
                if(matrix[row][j] == target)    return true;
            }
        }
        return false;
    }
};