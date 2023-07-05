class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz= 0;
        ListNode* curr = head;
        while(curr){
            curr=curr->next;
            sz++;
        }
        if(sz == n){
            head = head->next;
            return head;
        }
        curr = head;
        for(int i = 0; i < sz- n - 1; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};


/*
Time Complexity: O(2N), where N = no.  of nodes present in the list.

Space Complexity: O(1).
*/