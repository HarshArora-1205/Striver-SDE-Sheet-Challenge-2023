class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), head = 0, tail;
        for(tail = 1; tail < n; tail++){
            if(nums[head] != nums[tail]){
                head++;
                nums[head] = nums[tail];
            }
        }
        return head + 1;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(1).
*/ 