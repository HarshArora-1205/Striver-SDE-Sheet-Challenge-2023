class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        for(int i = 0; i < abs(n); i++){
            ans = n > 0 ? ans * x : ans /x;
        }
        return ans;
    }
};