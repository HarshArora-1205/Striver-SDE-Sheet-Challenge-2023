class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = head, *prev = NULL, *nextCurr;
        while(curr){
            nextCurr = curr->next;
            curr->next = prev;

            prev = curr;
            curr = nextCurr;
        }
        return head = prev;

    }
};

/*
Time Complexity: O(N), where N = no.  of nodes present in the list.

Space Complexity: O(1).
*/