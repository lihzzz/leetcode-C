//
// Created by lihzz on 2018/6/22.
//


#include "../DataStruct.h"


class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(!pHead || !pHead->next){
            return pHead;
        }

        if(pHead->val == pHead->next->val){
            ListNode* pNext  = pHead->next;
            while (pNext && pNext->val == pHead->val){
                pNext = pNext->next;
            }
            return deleteDuplication(pNext);
        }else{
            pHead->next = deleteDuplication(pHead->next);
            return pHead;
        }
    }
};