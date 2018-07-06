//
// Created by lihzz on 2018/7/4.
//

#include "../../DataStruct.h"

class Solution {
public:
    /**
     * @param head: ListNode head is the head of the linked list
     * @param m: An integer
     * @param n: An integer
     * @return: The head of the reversed ListNode
     */
    ListNode * reverseBetween(ListNode * head, int m, int n) {
        // write your code here

        if(!head || !head->next){
            return head;
        }

        ListNode* curhead = head;
        ListNode* npre = NULL;
        ListNode* nnext = NULL;
        int len = 0;
        while (curhead){
            ++len;
            npre = len == m - 1?curhead:npre;
            nnext = len == n + 1?curhead:nnext;
            curhead = curhead->next;
        }

        if(m<1|| n>len){
            return head;
        }

        ListNode* pre = NULL;
        ListNode* next = NULL;
        if(!npre)
            curhead = head;
        else
            curhead = npre->next;
        ListNode* ccurhead = curhead;
        while (ccurhead != nnext){
            next = ccurhead->next;
            ccurhead->next = pre;
            pre = ccurhead;
            ccurhead = next;
        }

        curhead->next = nnext;
        if(npre){
            npre->next = pre;
            return head;
        }else{
            return pre;
        }
    }
};