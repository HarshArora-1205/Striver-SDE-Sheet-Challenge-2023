class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int n = 0;
        while(curr){
            curr = curr->next;
            n++;
        }
        curr = head;
        for(int i = 0; i<n/2; i++){
            curr = curr->next;
        }
        return curr;
    }
};

/*
Time Complexity: O(N + N/2), where N = no.  of nodes present in the list.

Space Complexity: O(1).
*/