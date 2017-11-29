//
// Created by LH on 2017/11/29.
//
#include "../DataStruct.h"
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode* slow=head,*faster = head;
        while(faster&& faster->next){
            slow = slow->next;
            faster = faster->next->next;
            if(slow ==faster) break;
        }
        if(!faster || !faster->next)
            return NULL;
        faster = head;
        while(slow != faster){
            slow = slow->next;
            faster = faster->next;
        }
        return slow;
    }
};