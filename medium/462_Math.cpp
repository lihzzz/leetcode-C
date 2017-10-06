//
// Created by lh on 2017/10/6.
//
#include <vector>
#include <algorithm>
using std::sort;
using std::vector;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int res = 0;
        int mid = n/2;
        for (int i = 0; i <n ; ++i) {
            res += std::abs(nums[mid] - nums[i]);
        }
        return res;
    }
};
