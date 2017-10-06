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
        for (int i = 1; i <n ; ++i) {
            res[i] = res[i-1] * nums[i-1];
        }
        int right = 1;
        for (int j = n-1; j >=0 ; --j) {
            res[j] *= right;
            right *= nums[j];
        }
//        vector<int> leftProduct(n,1),rigtProduct(n,1);
//        for (int i = 0; i <n-1 ; ++i) {
//            leftProduct[i+1] = leftProduct[i] * nums[i];
//        }
//        for (int j = n-1; j >0 ; --j) {
//            rigtProduct[j-1] = rigtProduct[j] * nums[j];
//        }
//        for (int k = 0; k < n; ++k) {
//            res.push_back(leftProduct[k] * rigtProduct[k]);
//        }
        return res;
    }
};
