class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr or head->next==nullptr){
            return false;
        }
        ListNode *q,*p;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            q=q?q->next:q;
        }while(p!=q and q and p);
        
        if(p==q){
            return true;
        }
        else{
            return false;
        }
    }
};
