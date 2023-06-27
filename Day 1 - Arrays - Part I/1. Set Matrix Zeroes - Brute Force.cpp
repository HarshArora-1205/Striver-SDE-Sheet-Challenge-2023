class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j , n; j++) {
                if(matrix[i][j] == 0) {
                    // markCol(j);
                    for(int r = 0; r < m; r++) {
                        if(matrix[r][j])    matrix[r][j] = -1;
                    }
                    // markRow(i)
                    for(int c = 0; r < c; c++) {
                        if(matrix[i][c])    matrix[i][c] = -1;
                    }
                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == -1)
                    matrix[i][j] = 0;
            }   
        }
    }
};

/*
Time Complexity: O((N*M)*(N + M)) + O(N*M), where N = no. of rows in the matrix and M = no. of columns in the matrix.

Reason: Firstly, we are traversing the matrix to find the cells with the value 0. It takes O(N*M).
Now, whenever we find any such cell we mark that row and column with -1.
This process takes O(N+M). So, combining this the whole process, finding and marking, takes O((N*M)*(N + M)).
Another O(N*M) is taken to mark all the cells with -1 as 0 finally.

Space Complexity: O(1) as we are not using any extra space.
*/