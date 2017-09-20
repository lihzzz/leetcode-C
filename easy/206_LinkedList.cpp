//
// Created by lh on 2017/9/20.
//

#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if(!head)
//            return head;
//        ListNode*p,*q;
//        p = head;
//        q = head->next;
//        head->next = NULL;
//        while (q){
//            ListNode *r = q->next;
//            q->next = p;
//            p = q;
//            q =  r;
//        }
//        return p;
//    }
//};

class Solution {
public:
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