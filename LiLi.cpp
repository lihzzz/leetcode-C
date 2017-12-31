//
// Created by lh on 2017/12/30.
//

#include <iostream>
#include "./DataStruct.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 || !l2) return l1?l1:l2;
        ListNode *res = new ListNode(0);
        ListNode *cur = res;
        while (l1->next && l2->next ){
            if(l1->val < l2->val){
                cur ->next = new ListNode(l1->val);
                cur = cur->next;
                l1 = l1->next;
            } else{
                cur ->next = new ListNode(l2->val);
                cur = cur->next;
                l2 = l2->next;
            }
        }
        if(l1->next)
            cur ->next = l1;
        else
            cur->next = l2;
        return res->next;
    }
};