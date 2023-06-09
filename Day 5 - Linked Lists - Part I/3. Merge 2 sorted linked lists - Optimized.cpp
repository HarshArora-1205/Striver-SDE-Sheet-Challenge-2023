class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head, *tail;
        if(!l1) return l2;
        if(!l2) return l1;
        if(l1->val <= l2->val)  {
            head = l1;
            tail = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            tail = l2;
            l2 = l2->next;
        }
        while(l1 && l2) {
            if(l1->val <= l2->val) {
                tail->next = l1;
                tail = l1;
                l1 = l1->next;
            }
            else {
                tail->next = l2;
                tail = l2;
                l2 = l2->next;
            }
        }
        if(l1) tail->next = l1;
        if(l2) tail->next = l2;
        return head;
    }
};

/*
Time Complexity: O(N+M), where N = no.  of nodes present in the list1 and M = no. of nodes present in the list2.

Space Complexity: O(1).
*/