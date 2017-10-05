//
// Created by lh on 2017/10/5.
//

#include "../DataStruct.h"
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
class Solution {
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        int maxnum = 0,sum;
        unordered_map<int,int> m;
        helper(root,m,maxnum);
        for(auto a:m){
            if(a.second == maxnum)
                res.push_back(a.first);
        }
        return res;
    }
    int helper(TreeNode* t,unordered_map<int,int>& m,int& maxnum){
        if(!t)
            return 0;
        int sum = t->val;
        sum += helper(t->left,m,maxnum);
        sum += helper(t->right,m,maxnum);
        m[sum] ++;
        maxnum = std::max(maxnum,m[sum]);
        return sum;
    }
};
