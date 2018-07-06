//
// Created by lihzz on 2018/7/4.
//

#include "../../DataStruct.h"

class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @param n: An integer
     * @return: The head of linked list.
     */
    ListNode * removeNthFromEnd(ListNode * head, int n) {
        // write your code here
        if(!head || n<1){
            return head;
        }
        ListNode* cur = head;
        while(cur){
            --n;
            cur = cur->next;
        }
        if(n == 0){
            return head->next;
        }else if(n<0){
            cur = head;
            while (++n != 0){
                cur = cur->next;
            }
            cur->next = cur->next->next;
        }
        return head;
    }
};