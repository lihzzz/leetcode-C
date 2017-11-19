//
// Created by lh on 2017/11/12.
//

#include "../../DataStruct.h"
#include <vector>
using namespace std;
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res(k,NULL);
        int count = 0;
        ListNode* head = root;
        while (head){
            count++;
            head = head->next;
        }
        int per = count/k,aper = count % k;
        int curindex = 0;

        for (int i = 0; i <k ; ++i) {
            int sum = 0;
            ListNode* head = new ListNode(0);
            ListNode* l =head;
            int end = per+(i<aper?1:0);
            while (sum<end){
                if(root){
                    l->next = new ListNode(root->val);
                    l=l->next;
                    root = root->next;
                    sum++;
                }
                else{
                    l->next = NULL;
                    break;
                }
            }
            res[i] = head->next;
        }
        return res;
    }
};