//
// Created by lh on 2017/9/28.
//
#include <vector>
#include <unordered_map>
using std::unordered_map;
using std::vector;

//TLE
//class Solution {
//public:
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        if(nums.empty())
//            return false;
//        for (int i = 0; i <nums.size() ; ++i) {
//            for (int j = i+1; j <i+k && j<nums.size() ; ++j) {
//                if(nums[j] == nums[i])
//                    return true;
//            }
//        }
//        return false;
//    }
//};


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i <nums.size() ; ++i) {
            if(m.count(nums[i]) && i-m[nums[i]] <=k){
                return true;
            } else
                m[nums[i]] = i;
        }
        return false;

    }
private:
    unordered_map<int,int>m;
};