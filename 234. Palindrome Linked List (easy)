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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr or head->next==nullptr){
            return true;
        }
        ListNode *p=head;
        stack<int> s;
        while(p){
            s.push(p->val);
            p=p->next;
        }
        p=head;
        
        while(p){
            
            if(s.top()!=p->val){
                return false;
            }
            else{
                s.pop();
                p=p->next;
            }
        }
        return true;
    }
};
