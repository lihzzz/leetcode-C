//
// Created by lh on 2017/10/3.
//
#include <vector>
#include <algorithm>
using std::vector;
using std::sort;
//class Solution {
//public:
//    vector<int> findDuplicates(vector<int>& nums) {
//        vector<int> res;
//        if(nums.empty())
//            return res;
//        sort(nums.begin(),nums.end());
//        int pre=nums[0];
//        for (int i = 1; i <nums.size() ; ++i) {
//            if(nums[i] == pre)
//                res.push_back(nums[i]);
//            pre = nums[i];
//        }
//        return res;
//    }
//};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for (int i = 0; i <nums.size() ; ++i) {
            int index = abs(nums[i])-1;
            if(nums[index] < 0) res.push_back(index+1);
            nums[index] = -nums[index];
        }
        return res;
    }
};