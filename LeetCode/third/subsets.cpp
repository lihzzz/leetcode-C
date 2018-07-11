//
// Created by lihzz on 2018/7/11.
//
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.empty()){
            res;
        }
        vector<int> tmp;
        helper(res,0,tmp,nums);
        return res;
    }

private:
    void helper(vector<vector<int>>& res,int start,vector<int> tmp,const vector<int>& nums){
        if(start == nums.size()){
            res.push_back(tmp);
            return;
        }
        helper(res,start+1,tmp,nums);

        tmp.push_back(nums[start]);
        helper(res,start+1,tmp,nums);
        tmp.pop_back();
    }
};