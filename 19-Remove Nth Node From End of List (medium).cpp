ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *q=nullptr,*p;
        p=head;
        int count=0;
        while(p){
           count++;
            p=p->next;
        }
        p=head;
        int pos= count-(n-1);
        
        if(pos==1 and count==1){
            return nullptr;
        }
        
        if(pos==1){
            head= head->next;
            return head;
        }
        
        for(int i=0;i<pos-1 and p;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
        
        return head;
    }
