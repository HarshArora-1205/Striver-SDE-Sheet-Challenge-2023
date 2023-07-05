class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, bool> m;
        ListNode *currA = headA, *currB = headB;
        while(currA){
            m[currA] = 1;
            currA = currA->next;
        }
        while(currB){
            if(m[currB]){
                return currB;
            }
            currB = currB->next;
        }
        return NULL;
    }
};

/*
Time Complexity: O(N+M).

Space Complexity: O(N).
*/