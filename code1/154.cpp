//
// Created by lh on 2017/9/12.
//
#include <vector>
using std::vector;
using std::min;
class Solution{
public:
    int findMin(vector<int>& nums){
        if(nums.empty())
            return  0;
        int left = 0,right = nums.size()-1,res = nums[0];
        while (left < right - 1){
            int mid = (left + right) / 2;
            if(nums[left] < nums[mid]){
                res = min(res,nums[left]);
                left = mid +1;
            } else if(nums[left] > nums[mid]){
                res = min(res,nums[right]);
                right = mid;
            }else{
                left ++ ;
            }
        }
        res = min(res, nums[left]);
        res = min(res, nums[right]);
        return res;
    }
};