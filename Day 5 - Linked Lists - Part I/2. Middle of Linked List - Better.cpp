class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *curr = head, *nextCurr = head;
        while(nextCurr && nextCurr->next){
            curr = curr->next;
            nextCurr = nextCurr->next->next;
        }
        return curr;
    }
};

/*
Time Complexity: O(N), where N = no.  of nodes present in the list.

Space Complexity: O(1).
*/