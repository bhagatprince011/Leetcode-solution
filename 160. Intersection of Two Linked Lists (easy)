ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        int a=0,b=0;
        ListNode *p1=h1,*p2=h2;                                                       
        while(p1){
            a++;
            p1=p1->next; 
        }
        while(p2){
            b++;
            p2=p2->next; 
        }
        int d=abs(a-b);
        p1=h1;p2=h2;
        if(a>b){
            while(d--){
                p1=p1->next;
            }
        }
        else{
           while(d--){
               p2=p2->next;
           } 
        }
        while(p1 and p2 and p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
