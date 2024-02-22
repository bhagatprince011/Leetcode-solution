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
    ListNode* middleNode(ListNode* head) {
        stack<int> s;
        ListNode *t,*q;
        while(head){
            s.push(head->val);
            head=head->next;
        }
        
        int size=s.size();
        int mid=0;
        if(size%2==0){ mid=size/2;}
        else{ mid=(size/2)+1;}
        
        t=new ListNode;
        t->val=s.top();
        t->next=nullptr;
        s.pop();
        
        
        for(int i=1;i<mid;i++){
            q=new ListNode;
            q->val=s.top();
            s.pop();
            q->next=t;
            t=q;
            
        }
        return t;
    }
};
