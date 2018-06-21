//
// Created by lh on 2018/3/31.
//

#include "../DataStruct.h"
#include <stack>
using  namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 || !l2){
            return NULL;
        }
        stack<int> s1,s2;
        while (l1){
            s1.push(l1->val);
            l1 = l1->next;
        }
        while (l2){
            s2.push(l2->val);
            l2 = l2->next;
        }
        ListNode* head;
        while (!s1.empty() && !s2.empty()){
            ListNode* tmp = new ListNode(s1.top()+s2.top());
            head->next = tmp;
            tmp->val = s1.top() + s2.top();
            head  = head->next;
        }

    }
};