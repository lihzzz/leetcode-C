//
// Created by lh on 2017/10/4.
//
#include <vector>
using std::vector;
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> res;
//        vector<int> tmp,vis(nums.size(),0);
//        helper(nums,res,tmp,vis,0);
//        return res;
//    }
//    void helper(vector<int> nums,vector<vector<int>> &res,vector<int>& tmp,vector<int>& vis,int level){
//        if(level == nums.size()){
//            res.push_back(tmp);
//            return;
//        }
//        for (int i = 0; i <nums.size(); ++i) {
//            if(vis[i] == 0){
//                vis[i] = 1;
//                tmp.push_back(nums[i]);
//                helper(nums,res,tmp,vis,level+1);
//                tmp.pop_back();
//                vis[i] = 0;
//            }
//        }
//    }
//};
#include <utility>
#include <iostream>

using std::swap;
class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > res;
        permuteDFS(num, 0, res);
        return res;
    }
    void permuteDFS(vector<int> &num, int start, vector<vector<int> > &res) {
        if (start >= num.size()){
            res.push_back(num);
            for (int i = 0; i < num.size(); ++i) {
                std::cout<<num[i] << " ";
            }
            std::cout<< std::endl;
        }
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};