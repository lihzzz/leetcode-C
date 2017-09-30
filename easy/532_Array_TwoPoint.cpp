//
// Created by lh on 2017/9/30.
//
#include <vector>
#include <unordered_map>
#include <algorithm>
using std::unordered_map;
using std::vector;
//class Solution {
//public:
//    int findPairs(vector<int>& nums, int k) {
//        std::sort(nums.begin(),nums.end());
//        int size = nums.size(),res = 0;
//        int pre = INT_MAX,rpre=INT_MAX;
//        for (int i = 0; i <size; ++i) {
//            if(nums[i] == pre)
//                continue;
//            for (int j = i+1; j <size ; ++j) {
//                if(rpre == nums[j])
//                    continue;
//                if(nums[j] - nums[i] == k){
//                    ++res;
//                } else if(nums[j] -nums[i] > k){
//                    break;
//                }
//                rpre = nums[j];
//            }
//            pre = nums[i];
//        }
//        return res;
//    }
//};


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int res = 0;
        for(auto a:nums) ++m[a];
        if(k==0){
            for(auto a:m)
                if(a.second>1) res ++;
        } else{
            for(auto a:m){
                if(k>0 && m.count(a.first+k)){
                    res ++;
                }
            }
        }
        return res;
    }
};