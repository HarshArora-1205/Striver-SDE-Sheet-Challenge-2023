class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *> m;
        while(head){
            if(m.find(head) != m.end()) return true;
            m.insert(head);
            head = head->next;
        }
        return false;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(N).
*/