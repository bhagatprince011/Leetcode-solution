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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr or (head->next==nullptr and head->val==val)){
            return nullptr;
            
        }
        ListNode *p,*q=nullptr;
        p=head;
        if(p->val==val){
            head=p->next;
        }
        p=head;
        q=p;
        p=p->next;
        
        while(p){
            
            if(p->val==val){
                q->next=p->next;
                p=p->next;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        if(head->val==val){
            head=head->next;
        }
        return head;
        
        
        
    }
};
