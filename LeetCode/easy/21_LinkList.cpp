//
// Created by lh on 2017/9/22.
//
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 || !l2) {
            return l1?reverseList(l1):reverseList(l2);
        }
        ListNode *res = new ListNode(0);
        ListNode *cur = res;
        while (l1->next && l2->next ){
            if(l1->val < l2->val){
                cur ->next = new ListNode(l1->val);
                cur = cur->next;
                l1 = l1->next;
            } else {
                cur ->next = new ListNode(l2->val);
                cur = cur->next;
                l2 = l2->next;
            }
        }
        if(l1->next)
            cur ->next = l1;
        else
            cur->next = l2;
        return reverseList(res->next);
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* p = head;
        head = reverseList(p->next);
        p->next->next = p;
        p->next = NULL;
        return head;
    }
};

