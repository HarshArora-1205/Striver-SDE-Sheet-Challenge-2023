class Solution {
public:
    int maxSubArray(vector<int>& nums, int left, int right){
        if(left == right)   return nums[left];

        int leftMax = INT_MIN, rightMax = INT_MIN;

        int mid = (left + right)/2, currSum = 0;
        for(int i = mid; i >= left; i--) {
            currSum += nums[i];
            leftMax = max(leftMax, currSum);
        }

        currSum = 0;
        for(int i = mid + 1; i <= right; i++) {
            currSum += nums[i];
            rightMax = max(rightMax, currSum);
        }

        int leftSum = maxSubArray(nums, left, mid);
        int rightSum = maxSubArray(nums, mid + 1, right);

        return max(leftMax + rightMax, max(leftSum, rightSum));
    }
    int maxSubArray(vector<int>& nums) {
        return maxSubArray(nums, 0, nums.size()-1);
    }
};