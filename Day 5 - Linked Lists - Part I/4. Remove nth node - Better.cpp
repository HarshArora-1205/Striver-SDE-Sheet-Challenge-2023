class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *left = head, *right = head;
        while(n){
            right = right->next;
            n--;
        } 
        if(!right)    return head->next;
        while(right->next){
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return head;
    }
};


/*
Time Complexity: O(N), where N = no.  of nodes present in the list.

Space Complexity: O(1).
*/