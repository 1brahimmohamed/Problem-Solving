/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr)
            return nullptr;

        ListNode* prev = head;
        ListNode* newHead = prev;
        ListNode* curr = head->next;
        unordered_map<int, int> map;
        int counter = 0;

        map[prev->val]++;

        while(curr != nullptr){
            
            if(map[curr->val] >= 1){
                prev->next = curr->next;
            }
            else{
                map[curr->val]++;
                prev = curr;
            }

            curr = curr->next;
        }

        return newHead;
    }
};
