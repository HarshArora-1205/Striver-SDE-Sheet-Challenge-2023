class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val <= l2->val)  {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};


/*
Time Complexity: O(N+M), where N = no.  of nodes present in the list1 and M = no. of nodes present in the list2.

Space Complexity: O(N+M) - recursive stack space, where N = no.  of nodes present in the list1 and M = no. of nodes present in the list2.
*/