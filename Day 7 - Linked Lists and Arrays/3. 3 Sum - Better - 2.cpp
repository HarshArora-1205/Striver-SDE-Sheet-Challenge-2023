class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> st;
        for(int i = 0; i < n; i++){
            unordered_set<int> s;
            for(int j = i+1; j < n; j++){
                int third = -(nums[i] + nums[j]);
                if(s.find(third) != s.end()){
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

/*
Time Complexity: O(N^2).

Space Complexity: O(3*K + N).
*/ 