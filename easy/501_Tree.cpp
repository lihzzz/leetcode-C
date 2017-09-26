//
// Created by lh on 2017/9/25.
//

#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//public:
//    vector<int> findMode(TreeNode* root) {
//        if(!root)
//            return {};
//        unordered_map<int,int> m;
//        vector<int> res;
//        helper(root,m);
//        int _max = 0;
//        for(auto a:m)
//            _max = std::max(a.second,_max);
//        for(auto a:m){
//            if(a.second == _max)
//                res.push_back(a.first);
//        }
//        return res;
//
//
//    }
//    void helper(TreeNode* r,unordered_map<int,int>& m){
//        if(!r)
//            return;
//        ++m[r->val];
//        helper(r->left,m);
//        helper(r->right,m);
//    }
//};


class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        int cnt=1,mx=0;
        TreeNode* pre=NULL;
        helper(root,pre,cnt,mx,res);
        return res;
    }
    void helper(TreeNode* r,TreeNode* &pre,int &cnt,int& mx,vector<int>& res){
        if(!r)
            return;
        helper(r->left,pre,cnt,mx,res);
        if(pre)
            cnt = (r->val == pre->val)? cnt+1:1;
        if(cnt >= mx){
            if(cnt > mx) res.clear();
            res.push_back(r->val);
            mx = cnt;
        }
        pre = r;
        helper(r->right,pre,cnt,mx,res);
    }
};