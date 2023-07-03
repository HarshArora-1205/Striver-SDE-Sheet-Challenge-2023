class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto it:m){
            if(it.second > 1)   return it.first;
        }
        return 0; 
    }
};