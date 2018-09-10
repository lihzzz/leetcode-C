//
// Created by lihzz on 2018/8/16.
//

#include "../DataStruct.h"
#include "../common_header.h"
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        ListNode* first = head;
        ListNode* second = head->next;

        while(first && second && second->next){
            if(first == second){
                return true;
            }
            first = first->next;
            second = second->next->next;
        }
        return false;
    }
};