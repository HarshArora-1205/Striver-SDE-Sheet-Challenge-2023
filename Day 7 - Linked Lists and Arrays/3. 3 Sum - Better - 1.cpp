class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            unordered_set<int> s;
            for(int j = i+1; j < n; j++){
                int third = -(nums[i] + nums[j]);
                if(s.find(third) != s.end()){
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    auto it = find(ans.begin(), ans.end(), temp);
                    if(it == ans.end())
                        ans.push_back(temp);
                }
                s.insert(nums[j]);
            }
        }
        return ans;
    }
};

/*
Time Complexity: O(N^3).

Space Complexity: O(N).
*/ 