class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    for(int l = k + 1; l < n; l++){
                        if((long long)nums[i] + nums[j] + nums[k] + nums[l] == target){
                            vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(), temp.end());
                            auto it = find(ans.begin(), ans.end(), temp);
                            if(it == ans.end())
                                ans.push_back(temp);
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};