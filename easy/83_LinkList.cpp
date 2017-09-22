//
// Created by lh on 2017/9/22.
//
#include <iostream>
#include <set>
using std::set;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if(!head)return head;
//        ListNode* pre,*cur;
//        cur = head;
//        pre = head;
//        set<int> m;
//        while (cur){
//            if(m.count(cur->val)){
//                pre->next = cur->next;
//                cur = pre->next;
//            }else{
//                m.insert(cur->val);
//                pre = cur;
//                cur = cur->next;
//            }
//        }
//        return head;
//    }
//};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)return head;
        ListNode* t = head;
        while (t && t->next){
            if(t->val == t->next->val){
                t->next = t->next->next;
            }else{
                t = t->next;
            }
        }
        return head;
    }
};