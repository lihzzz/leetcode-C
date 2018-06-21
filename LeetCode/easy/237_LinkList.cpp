//
// Created by lh on 2017/9/20.
//
#include <iostream>



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};