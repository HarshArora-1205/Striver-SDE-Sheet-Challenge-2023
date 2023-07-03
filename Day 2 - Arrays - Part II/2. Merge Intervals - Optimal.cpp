class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv){
        vector<vector<int>> ans;
        int n = iv.size();
        sort(iv.begin(), iv.end());
        for(int i = 0; i < n; i++){
            if(ans.empty() || ans.back()[1] < iv[i][0]){
                ans.push_back(iv[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], iv[i][1]);
            }
        }
        return ans;
    }
};