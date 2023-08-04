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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int reminder = 0;
        ListNode* res = nullptr;
        ListNode* curr = nullptr;
        int num1 = 0, num2 = 0;
        int sum;

        while(l1  || l2 || (reminder != 0)){

            if(l1){
                num1=l1->val;
                l1 = l1->next;
            }
            else
                num1 = 0;

            if(l2){
                num2=l2->val;
                l2 = l2->next;
            }
            else
                num2 = 0;

            

            sum =  (num1 + num2 + reminder);
            reminder = 0;
            if (sum > 9){
                reminder = 1;
                sum = sum % 10;
            }
            
            ListNode* sumer = new ListNode(sum);

            if (!res) {
                res = sumer;
                curr = sumer;
            } else {
                curr->next = sumer;
                curr = curr->next;
            }

        }

        return res;
    }
};