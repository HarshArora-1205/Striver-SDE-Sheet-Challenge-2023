class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv){
        vector<vector<int>> ans;
        int n = iv.size();
        sort(iv.begin(), iv.end());
        for(int i = 0; i < n; i++){
            int start = iv[i][0];
            int end = iv[i][1];
            if(!ans.empty() && ans.back()[1] >= end){
                continue;
            } 
            for(int j = i+1; j<n; j++){
                if(iv[j][0] <= end){
                    end = max(end, iv[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start, end});
        }
        return ans;
    }
};