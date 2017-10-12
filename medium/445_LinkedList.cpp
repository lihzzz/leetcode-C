//
// Created by lhy on 2017/10/11.
//

#include "../DataStruct.h"
#include <stack>
using namespace std;
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode* lr1 = ReverseList(l1);
//        ListNode* lr2 = ReverseList(l2);
//
//        ListNode* res = new ListNode(0);
//        ListNode* t = res;
//        int carry = 0;
//        while (lr1&&lr2){
//            int m = lr1->val + lr2->val +carry;
//            carry = m>9?m/10:0;
//            m = m>9?m%(carry*10):m;
//            t->next = new ListNode(m);
//            t = t->next;
//            lr1 = lr1->next;
//            lr2 = lr2->next;
//        }
//        while (lr1) {
//            int m = lr1->val + carry;
//            carry = m>9?m/10:0;
//            m = m>9?m%(carry*10):m;
//            t->next = new ListNode(m);
//            t = t->next;
//            lr1 = lr1->next;
//        }
//        while (lr2) {
//            int  m = lr2->val + carry;
//            carry = m>9?m/10:0;
//            m = m>9?m%(carry*10):m;
//            t->next = new ListNode(m);
//            t = t->next;
//            lr2 = lr2->next;
//        }
//        if(carry){
//            t->next = new ListNode(carry);
//        }
//        return ReverseList(res->next);
//    }
//    ListNode* ReverseList(ListNode* head){
//        ListNode*p,*q,*t=head;
//        p = head->next;
//        while (p){
//            q = p->next;
//            p->next = t;
//            t = p;
//            p = q;
//        }
//        head->next = NULL;
//        return t;
//    }
//};



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2;
        while (l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
        int carry = 0;
        while (!s1.empty() || !s2.empty()){
            int sum = carry;
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            carry = sum > 9 ? sum/10:0;
            sum = sum>9?sum%(carry * 10):sum;
            res->val = sum;
            ListNode* head = new ListNode(carry);
            head->next = res;
            res = head;
        }
        return res->val == 0 ? res->next:res;
    }
};