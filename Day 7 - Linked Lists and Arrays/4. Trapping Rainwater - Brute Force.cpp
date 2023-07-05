class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), trap = 0;
        for(int i = 0; i < n; i++){
            int lMax = 0, rMax = 0, j;
            j = i;
            while(j >= 0){
                lMax = max(lMax, height[j]);
                j--;
            }
            j = i;
            while(j < n){
                rMax = max(rMax, height[j]);
                j++;
            }
            trap += max((min(lMax, rMax) - height[i]), 0);
        }
        return trap;
    }
};

/*
Time Complexity: O(2N^2).

Space Complexity: O(1).
*/ 