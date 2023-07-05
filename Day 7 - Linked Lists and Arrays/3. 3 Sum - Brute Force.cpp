class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k  = j+1; k < n; k++){
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    if(nums[i] + nums[j] + nums[k] == 0){
                        auto it = find(ans.begin(), ans.end(), temp);
                        if(it == ans.end())
                            ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
    }
};

/*
Time Complexity: O(N^4).

Space Complexity: O(1).
*/ 