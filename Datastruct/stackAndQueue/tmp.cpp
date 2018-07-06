//
// Created by lihzz on 2018/7/6.
//
#include <vector>
#include "../../DataStruct.h"
#include <queue>
#include <stack>
using namespace std;
class Solution {
public:
    /**
     * @param root: A Tree
     * @return: Postorder in ArrayList which contains node values.
     */
    vector<int> postorderTraversal(TreeNode * root) {
        // write your code here
        vector<int> res;
        stack<TreeNode*> s;
        TreeNode* cur = root;
        TreeNode* pre = NULL;
        while(cur || !s.empty()){
            while (cur){
                s.push(cur);
                cur = cur->left;
            }
            if(!s.empty()){
                cur = s.top();
                if(cur->right && cur->right!= pre){
                    cur = cur->right;
                }else{
                    s.pop();
                    res.push_back(cur->val);
                    pre = cur;
                    cur = NULL;
                }
            }
        }
        return res;
    }
};