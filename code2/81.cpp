//
// Created by lh on 2017/9/13.
//
#include <vector>
using std::vector;

class Solution {
public:
     bool search(vector<int>& nums, int target) {
        if(nums.empty())
            return false;
        int left = 0,right = nums.size()-1;
        while (left<= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] < nums[right]){
                if(nums[mid] < target && nums[right] >= target )
                    left = mid + 1;
                else
                    right = mid - 1;
            } else if(nums[mid] > nums[right]){
                if(nums[left]<= target & nums[mid] > target){
                    right = mid - 1;
                }else{
                    left = mid + 1;
                }
            }else{
                right --;
            }
        }
        return false;
    }
};
