class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        bool neg = n > 0 ? false : true;
        long long nc = labs(n);
        while(nc){
            if(nc & 1){
                ans *= x;
                nc--;
            }
            else{
                x *= x;
                nc /= 2;
            }
        }
        return neg ? 1 / ans : ans;
    }
};