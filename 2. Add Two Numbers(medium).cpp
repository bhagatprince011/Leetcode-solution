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
        ListNode *final = new ListNode(0);
        ListNode *p = final;
        int inHand = 0;
        while(l1 or l2 or inHand!=0){
            int first = l1?l1->val:0;
            int sec = l2?l2->val:0;
            int sum = first + sec + inHand;
            p->next = new ListNode(sum%10);
            p = p->next;
            inHand = sum / 10;
            l1 = l1?l1->next:nullptr;
            l2 = l2?l2->next:nullptr;            
        }
        return final->next;
    }
};
