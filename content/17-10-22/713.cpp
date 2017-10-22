//
// Created by lh on 2017/10/22.
//
#include <vector>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int tmp = 1;
            for (int j = i; j <n ; ++j) {
                tmp *= nums[j];
                if(tmp < k){
                    ++res;
                } else{
                    break;
                }
            }
        }
        return res;
    }
};