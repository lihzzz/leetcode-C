//
// Created by lh on 2017/9/28.
//
#include <iostream>
#include <stack>
using std::stack;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        if(!head)
//            return true;
//        ListNode* slow = head,*fast = head;
//        stack<int> s;
//        s.push(head->val);
//        while (fast->next && fast->next->next){
//            slow = slow->next;
//            fast = fast->next->next;
//            s.push(slow->val);
//        }
//        if(!fast->next)
//            s.pop();
//        slow = slow->next;
//        while (slow){
//            if(slow->val != s.top())
//                return false;
//            s.pop();
//            slow = slow->next;
//        }
//        return true;
//    }
//};


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head)
            return true;
        ListNode* slow = head,*fast = head;
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* pre =head,*last = slow->next;
        while (last->next){
            ListNode* p = last->next; //right
            last->next = p->next; //next
            p->next = slow->next;
            slow->next = p; // left
        }

        while (slow->next){
            slow = slow->next;
            if(pre->val!=slow->val)
                return false;
            pre = pre->next;
        }
        return true;
    }
};