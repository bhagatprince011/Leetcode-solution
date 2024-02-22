class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=nullptr,*q=nullptr;
        if(head==nullptr or head->next==nullptr){
            return head;
        }
        
        p=head;
        q=p;
        p=p->next;
        while(p){
            if(q->val!=p->val){
                q=p;
                p=p->next;
            }
            else{
                q->next=p->next;
                p=p->next;
                                
            }
            
        }
        return head;
    }
};
