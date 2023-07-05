class Solution {
public:
    Node* flatten(Node* head) {
        Node *curr = head;
        if(!curr)   return NULL;

        Node *nextChild = flatten(head->child);
        Node *nextList = flatten(head->next);

        if(nextChild){
            curr->next = nextChild;
            while(curr->next){
                curr->next->prev = curr;
                curr->child = NULL;
                curr = curr->next;
            }
        }

        curr->next = nextList;
        if(nextList)    nextList->prev = curr;
        return head;
    }
};

/*
Time Complexity: O(N).

Space Complexity: O(1) and recursion stack space.
*/ 