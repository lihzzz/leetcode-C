//
// Created by lhy on 2017/10/11.
//

#include "../DataStruct.h"


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lr1 = ReverseList(l1);
        ListNode* lr2 = ReverseList(l2);

        ListNode* res = new ListNode(0);
        ListNode* t = res;
        int carry = 0;
        while (lr1&&lr2){
            int m = lr1->val + lr2->val +carry;
            carry = m>9?m/10:0;
            m = m>9?m%(carry*10):m;
            t->next = new ListNode(m);
            t = t->next;
            lr1 = lr1->next;
            lr2 = lr2->next;
        }
        while(lr1){
            if(carry != 0) {
                t->next = new ListNode(lr1->val + carry);
                carry == 0;
            } else
                t->next = new ListNode(lr1->val);
            lr1 = lr1->next;
        }
        while (lr2){
            if(carry!=0){
                t->next = new ListNode(lr2->val+carry);
                carry = 0;
            } else
                t->next = new ListNode(lr2->val);
            lr2 = lr2->next;
        }
        return ReverseList(res->next);
    }
    ListNode* ReverseList(ListNode* head){
        ListNode*p,*q,*t=head;
        p = head->next;
        while (p){
            q = p->next;
            p->next = t;
            t = p;
            p = q;
        }
        return t;
    }
};
