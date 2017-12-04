//
// Created by lh on 2017/10/6.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);
        int leftnum = 1;
        int rightnum = 1;
        for (int i = 0; i <n ; ++i) {
            res[i]*=leftnum;
            leftnum *= nums[i];
            res[n-1-i] *= rightnum;
            rightnum *= nums[n-1-i];
        }
        return res;
    }
};
