/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p=node;
        ListNode *q=nullptr;
        while(p->next!=NULL){
            int temp=p->val;
            p->val=p->next->val;
            q=p;
            p=p->next;
            p->val=temp;
        }
        q->next=nullptr;
        
    }
};
