class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> set;
        ListNode* curr = head;

        while(curr != NULL){
            if(set.find(curr) != set.end()){
                return true;
            }
            else
                set.insert(curr);

            curr = curr->next;
        }

        return false;
    }
};