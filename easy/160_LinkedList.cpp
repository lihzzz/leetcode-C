//
// Created by lh on 2017/9/29.
//
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB)
            return NULL;
        int an = getlen(headA),bn = getlen(headB);

        if(an == bn){
            return isInterSection(headA,headB);
        } else if (an < bn){
            int diff = bn - an;
            while (diff != 0){
                headB = headB->next;
                --diff;
            }
            return isInterSection(headA,headB);
        }else{
            int diff = an-bn;
            while (diff!=0){
                headA = headA->next;
                --diff;
            }
            return isInterSection(headA,headB);
        }
    }
    ListNode* isInterSection(ListNode*p,ListNode*q){
        while (p){
            if(p->val == q->val)
                return p;
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
    int getlen(ListNode* r){
        int len = 0;
        while (r){
            ++len;
            r = r->next;
        }
        return len;
    }
};