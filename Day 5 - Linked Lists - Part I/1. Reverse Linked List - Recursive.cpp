class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};

/*
Time Complexity: O(N), where N = no.  of nodes present in the list.

Space Complexity: O(1) + Recursion stack space.
*/