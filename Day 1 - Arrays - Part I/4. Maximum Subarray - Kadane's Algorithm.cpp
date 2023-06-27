class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long ans = LONG_MIN, sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            if(sum > ans) ans = sum;
            if(sum < 0) sum = 0;
        }
        return ans;
    }
};