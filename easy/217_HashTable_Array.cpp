//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <unordered_map>
using std::vector;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int>m;
        if(nums.empty())return false;
        for(auto a:nums){
            ++m[a];
        }
        for(auto a:m){
            if(a.second != 1)
                return true;
        }
        return false;
    }
};