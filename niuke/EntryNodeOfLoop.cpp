//
// Created by lh on 2018/3/25.
//

#include "../DataStruct.h"

class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {

        if(pHead==NULL|| pHead->next==NULL)
            return NULL;
        ListNode* slow = pHead,*fast = pHead;

        while (slow->next && fast){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                break;
            }
            return NULL;
        }

        fast = pHead;
        while (fast!=slow){
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};