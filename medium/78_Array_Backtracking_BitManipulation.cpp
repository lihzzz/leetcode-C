//
// Created by lh on 2017/11/4.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

    }
    void helper(vector<int> nums,vector<int>& vis,vector<vector<int>>& res,vector<int> tmp,int count){
        if(tmp.size() == count ){
            res.push_back(tmp);
            return;
        }
        for (int i = 0; i <nums.size() ; ++i) {
            if(vis[i] == 0){
                tmp.push_back(nums[i]);
                vis[i] = 1;
                helper(nums,vis,res,tmp,count);
                tmp.pop_back();
            }
        }
    }
};