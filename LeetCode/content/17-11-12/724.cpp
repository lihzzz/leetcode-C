//
// Created by lh on 2017/11/12.
//
#include <vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        if(size < 3)
            return -1;
        for (int i = 0; i <size; ++i) {
            int sum1 = 0,sum2=0;
            int k = 0;
            for (int j = 0; j <i ; ++j) {
                sum1 += nums[j];
            }
            for (k = i+1; k <size ; ++k) {
                sum2+= nums[k];
            }

            if(sum1 == sum2){
                return i;
            }
        }
        return -1;
    }
};