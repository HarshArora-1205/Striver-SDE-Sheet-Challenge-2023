class Solution {
public:
    long long uniquePaths(int m, int n) {
        int N = m + n - 2;
        int R = m > n ? n - 1 : m - 1;
        double res = 1;
        for(int i = 0; i < R; i++){
            res *= N - i;
            res /= i + 1;
        }
        return res;
    }
};