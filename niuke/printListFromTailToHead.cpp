//
// Created by lh on 2018/3/11.
//
#include <vector>
#include <stack>
#include "../DataStruct.h"
using namespace std;
//class Solution {
//public:
//    vector<int> printListFromTailToHead(ListNode* head) {
//        vector<int> res;
//        if(!head)
//            return res;
//        while (head){
//            s.push(head->val);
//            head = head->next;
//        }
//        while (!s.empty()){
//            res.push_back(s.top());
//            s.pop();
//        }
//        return res;
//    }
//
//private:
//    stack<int> s;
//};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(!head)
            return res;
        helper(head,res);
        return res;
    }
    void helper(ListNode* node ,vector<int>& res){
        if(node->next)
            helper(node->next,res);
        res.push_back(node->val);
    }

};