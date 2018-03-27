//
// Created by lh on 2018/3/13.
//
#include "../DataStruct.h"


class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(!pHead)
            return NULL;
        ListNode* pre = pHead,*p = pHead->next,*q = pHead;
        pHead->next = NULL;
        while (p){
            pre = p->next;
            p->next = q;
            q = p;
            p = pre;
        }
        return q;
    }
};