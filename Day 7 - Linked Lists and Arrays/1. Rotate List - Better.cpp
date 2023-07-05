class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || !k) return head;
        ListNode *curr = head;
        int len = 1;
        while(curr->next){
            len++;
            curr = curr->next;
        }
        curr->next = head;
        k = k%len;
        curr = head;
        for(int i = 0; i < len - k -1; i++){
            curr = curr->next;
        }
        ListNode* newHead = curr->next;
        curr->next = NULL;

        return newHead;
        
    }
};

/*
Time Complexity: O(2N - K) ~ O(N).

Space Complexity: O(1).
*/ 