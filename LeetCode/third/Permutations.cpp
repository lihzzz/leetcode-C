//
// Created by lihzz on 2018/7/11.
//
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.empty())
            return res;
        vector<int> tmp;
        vector<int> vis(nums.size(),0);
        helper(res,vis,tmp,nums);
        return res;
    }

private:
    void helper(vector<vector<int>>& res,vector<int>& vis,vector<int> tmp,const vector<int>& nums){
        if(tmp.size() == nums.size()){
            res.push_back(tmp);
            return;
        }
        for (int i = 0; i < nums.size(); ++i) {
            if(vis[i] == 0){
                if(i>0&& nums[i] == nums[i-1] && vis[i-1] == 0) continue;
                tmp.push_back(nums[i]);
                vis[i] = 1;
                helper(res,vis,tmp,nums);
                tmp.pop_back();
                vis[i] = 0;
            }

        }
    }
};