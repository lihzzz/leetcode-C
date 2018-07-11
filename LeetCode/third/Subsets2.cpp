//
// Created by lihzz on 2018/7/11.
//
#include <vector>

using namespace std;
class Solution {
public:
    typedef vector<int>::iterator it;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        helper(res,nums.begin(),nums,tmp);
        return res;
    }

private:
    void helper(vector<vector<int>>& res,it index,const vector<int>& nums,vector<int> tmp){
        res.push_back(tmp);
        for ( auto i = index; i != nums.end() ; ++i) {
            if( i != index && *i == *(i-1)){
                continue;
            }
            tmp.push_back(*i);
            helper(res,i+1,nums,tmp);
            tmp.pop_back();
        }
    }
};