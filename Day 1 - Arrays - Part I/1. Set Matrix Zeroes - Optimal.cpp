class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // cols
        int col0 = 1;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!matrix[i][j]) {
                    matrix[i][0] = 0;

                    if(j)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if(matrix[0][0] == 0){
            for(int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
        
        if(col0 == 0){
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

/*
Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.
Reason: In this approach, we are also traversing the entire matrix 2 times and each traversal is taking O(N*M) time complexity.

Space Complexity: O(1) as we are not using any extra space.
*/
