//
// Created by lh on 2017/9/17.
//
#include <vector>
#include <algorithm>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        vector<int> data = {INT_MAX,INT_MAX};
        help(root,data);
        if(data[1] != INT_MAX)
            return data[1];
        return -1;
    }

    void help(TreeNode* p,vector<int>& data){
        if(p==NULL)
            return;
        if(p->val<data[0]){
            data[1] = data[0];
            data[0] = p->val;
        } else if(p->val > data[0] && p->val<data[1]){
            data[1] = p->val;
        }
        help(p->left,data);
        help(p->right,data);
    }
};