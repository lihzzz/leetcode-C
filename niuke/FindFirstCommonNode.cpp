//
// Created by lh on 2018/3/20.
//

#include "../DataStruct.h"
#include <stack>
using namespace std;
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        stack<ListNode*> s1,s2;
        ListNode*l1 = pHead1,*l2=pHead2;
        ListNode*res  = nullptr;
        while (l1){
            s1.push(l1);
            l1 = l1->next;
        }
        while (l2){
            s2.push(l2);
            l2 = l2->next;
        }

        while (!s1.empty() && !s2.empty()){
            if(s1.top()==s2.top()){
                res =  s1.top();
            }
            s1.pop();
            s2.pop();
        }
        return res;
    }
};