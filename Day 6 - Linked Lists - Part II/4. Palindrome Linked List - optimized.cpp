class Solution {
public:
    ListNode *reverse(ListNode *curr){
        ListNode *prev = NULL, *nex;
        while(curr){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // int len = 0;
        ListNode *slow = head, *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            // len++;
        }
        // len *= 2;
        // if(fast->next) len++;

        slow->next = reverse(slow->next);
        slow = slow->next;
        ListNode* front = head;
        while(slow){
            if(slow->val != front->val) return false;
            slow = slow->next;
            front = front->next;
        }
        return true;
    }
};

/*
Time Complexity: O(3N/2) ~ O(N).

Space Complexity: O(1).
*/