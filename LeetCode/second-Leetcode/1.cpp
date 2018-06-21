//
// Created by lh on 2018/3/31.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for (int i = 0; i <nums.size() ; ++i) {
           m[nums[i]] = i;
        }
        for (int j = 0; j <nums.size() ; ++j) {
            int cur = target - nums[j];
            if(m[cur]){
                return vector<int>{j,m[cur]};
            }
        }
    }
};