//
// Created by lh on 2017/9/19.
//
#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for (auto a:nums) {
            ++m[a];
        }
        for (auto b:m) {
            if(b.second >= nums.size()/2)
                return b.first;
        }
    }
};