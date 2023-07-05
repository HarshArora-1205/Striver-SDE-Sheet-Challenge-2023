class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set <ListNode *> hashMap;
        
        for(ListNode *curr = head; curr != NULL; curr = curr->next)
        {
            if(hashMap.find(curr) != hashMap.end()) return curr;
            hashMap.insert(curr);
        }
        return NULL;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(N).
*/