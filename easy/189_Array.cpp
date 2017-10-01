//
// Created by lh on 2017/10/1.
//
#include <vector>
#include <algorithm>
using std::vector;
//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        if(nums.empty())
//            return;
//        int n = nums.size();
//        k = k%n;
//        int index = n-k;
//        vector<int> tmp;
//        for (int i = index; i <n; ++i) {
//            tmp.push_back(nums[i]);
//        }
//        for (int j = 0; j <index ; ++j) {
//            tmp.push_back(nums[j]);
//        }
//        nums = tmp;
//    }
//};

//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        if(nums.empty() || (k %=nums.size()) == 0)
//            return;
//        int n = nums.size();
//        std::reverse(nums.begin(),nums.begin()+n-k);
//        std::reverse(nums.begin()+n-k,nums.end());
//        std::reverse(nums.begin(),nums.end());
//    }
//};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.empty() || (k %=nums.size()) == 0)
            return;
        int n = nums.size();
        for (int i = 0; i <n-k ; ++i) {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};