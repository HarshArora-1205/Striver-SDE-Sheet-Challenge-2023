class Solution {
public:
    int len(ListNode* head)
    {
        int len = 0;
        while(head)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int i;
        if(len(head)<k) return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        for(i=0;i<k;i++)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(N/K) - Recursive Stack Space.
*/