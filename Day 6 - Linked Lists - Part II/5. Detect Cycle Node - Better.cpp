class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool flag = true;
        if((head == NULL) || (head->next == NULL))  return NULL;
        ListNode *fast = head, *slow = head;
        
        while((fast->next)  && (fast->next->next)){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                flag = false;
                break;
            }
        }
        if(flag)    return NULL;
        fast = head;
        while(fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(1).
*/