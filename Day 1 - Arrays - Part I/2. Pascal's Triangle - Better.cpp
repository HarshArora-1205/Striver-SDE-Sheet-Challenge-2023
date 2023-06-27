class Solution {
public:
    int nCr(int n, int r) {
        long long res = 1;
        for(int i = 0; i < r; i++) {
            res *= (n-i);
            res /= (i+1);
        }
        return res;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i = 1; i <= n; i++){
            vector<int> temp;
            for(int j = 1; j <= i; j++){
                temp.push_back(nCr(i-1,j-1));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

/*
Time Complexity: O(c), where c = given column number.
Reason: We are running a loop for r times, where r is c-1.

Space Complexity: O(1) as we are not using any extra space.
*/