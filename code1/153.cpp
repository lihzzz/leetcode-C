//
// Created by lh on 2017/9/12.
//
#include <vector>
using std::vector;
using std::min;
class Solution{
public:
    int findMin(vector<int>& nums){
        if(nums[0] <= nums[nums.size()-1])
            return nums[0];
        int left = 0,right = nums.size()-1;
        while (left != right - 1){
            int mid = (left + right) / 2;
            if(nums[left] < nums[mid]){
                left = mid;
            } else{
                right = mid;
            }
        }
        return min(nums[left],nums[right]);
    }
};
