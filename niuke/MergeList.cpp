//
// Created by lh on 2018/3/13.
//

#include "../DataStruct.h"

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* res,*head,*pre;
        res =new ListNode(0);
        head = res;
        while (pHead1 && pHead2){
            if(pHead1->val < pHead2->val){
                res->next = pHead1;
                pHead1  = pHead1->next;
                res = res->next;
            }else{
                res->next = pHead2;
                pHead2 = pHead2->next;
                res = res->next;
            };
        }
        while (pHead1){
            res->next = pHead1;
            pHead1 = pHead1->next;
            res = res->next;
        }

        while(pHead2){
            res->next = pHead2;
            pHead2  = pHead2->next;
            res = res->next;
        }
        return head->next;
    }
};