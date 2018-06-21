//
// Created by lh on 2017/11/4.
//
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    vector<vector<int>> subsets(vector<int>& nums) {
//        vector<vector<int>> res(1);
//        sort(nums.begin(),nums.end());
//        for (int i = 0; i <nums.size() ; ++i) {
//            int size = res.size();
//            for (int j = 0; j <size ; ++j) {
//                res.push_back(res[j]);
//                res.back().push_back(nums[i]);
//            }
//        }
//        return res;
//    }
//
//};


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        sort(nums.begin(),nums.end());
        helper(nums,0,tmp,res);
        return res;
    }

    void helper(vector<int> nums,int pos,vector<int>& tmp,vector<vector<int>>& res){
        res.push_back(tmp);
        for (int i = pos; i <nums.size() ; ++i) {
            tmp.push_back(nums[i]);
            helper(nums,i+1,tmp,res);
            tmp.pop_back();
        }
    }

};