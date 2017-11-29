//
// Created by lh on 2017/11/29.
//
#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for (int i = 0; i <nums.size() ; ++i) {
            if(nums[i] != i)
                return i;
        }
        return nums.size();
    }
};