class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int low = 0, high = nums.size() -1;
        while(low < high){
            int sum = nums[low] + nums[high];
            if(sum == target){
                ans.push_back(low + 1);
                ans.push_back(high + 1);
                return ans;
            }
            else if(sum < target)   low++;
            else    high--;
        } 
        return ans;
    }
};