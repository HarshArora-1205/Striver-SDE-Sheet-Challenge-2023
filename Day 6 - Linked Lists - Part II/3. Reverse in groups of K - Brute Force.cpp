class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<vector<int>> v;
        ListNode *curr = head;
        vector<int> temp;
        int cnt = 0;
        while(curr){
            cnt++;
            temp.push_back(curr->val);
            curr=curr->next;
            if(cnt % k == 0){
                reverse(temp.begin(), temp.end());
                v.push_back(temp);
                temp={};
            }

        }
        v.push_back(temp);
        curr = head;
        cnt = 0;
        while(curr){
            curr->val = v[cnt/k][cnt%k];
            cnt++;
            curr = curr->next;
        }
        return head;
    }
};

/*
Time Complexity: O(N*K).

Space Complexity: O(N + K).
*/