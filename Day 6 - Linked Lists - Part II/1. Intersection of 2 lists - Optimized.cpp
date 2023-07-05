class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA, *currB = headB;
        while(currA!=currB){
            if(!currA) currA = headB;
            else currA = currA->next;
            if(!currB) currB = headA;
            else currB = currB->next;
        }
        return currA;
    }
};

/*
Time Complexity: O(2*max(N,M)).

Space Complexity: O(1).
*/