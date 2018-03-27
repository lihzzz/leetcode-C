//
// Created by lh on 2018/3/13.
//
#include "../DataStruct.h"
#include <vector>
#include <stack>
using namespace std;

//class Solution {
//public:
//    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
//        ListNode* res = NULL;
//        if(!pListHead || k = 0)
//            return res;
//        ListNode* front = pListHead, *back = pListHead;
//        for (int i = 1;  i<k ; ++i) {
//            if(front->next!=NULL){
//                front = front->next;
//            } else{
//                return NULL;
//            }
//        }
//        while (front->next !=NULL){
//            front = front->next;
//            back = back->next;
//        }
//        return back;
//    }
//};