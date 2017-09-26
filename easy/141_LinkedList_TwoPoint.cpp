//
// Created by lh on 2017/9/26.
//

#include <iostream>
#include <unordered_map>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//class Solution {
//public:
//    bool hasCycle(ListNode *head) {
//        if(!head)
//            return false;
//        ListNode* t=head->next;
//        std::unordered_map<ListNode*,int> m;
//        while(t){
//            if(m.count(t))
//                return true;
//            ++m[t];
//            t = t->next;
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        ListNode* slow=head,*faster = head;
        while(faster&& faster->next){
            slow = slow->next;
            faster = faster->next->next;
            if(slow ==faster) return true;
        }
        return false;
    }
};