class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *curr = head;
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        for(int i = 0; i < v.size()/2; i++){
            if(v[i] != v[v.size() - 1 - i])  return false;
        }
        return true;
    }
};

/*
Time Complexity: O(3N/2) ~ O(N).

Space Complexity: O(N).
*/