//
// Created by lh on 2017/9/28.
//
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val){
            head = head->next;
        }
        if(!head)
            return head;
        ListNode* pre = head,*cur = head->next;
        while(cur){
            if(cur->val == val){
                pre->next = cur->next;
                cur = cur->next;
            }else{
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};