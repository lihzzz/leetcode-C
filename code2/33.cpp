//
// Created by lh on 2017/9/13.
//
#include <vector>
using std::vector;
using std::min;
//class Solution {
//public:
//    int getmin(vector<int>& nums){
//        if(nums[0] < nums[nums.size()-1])
//            return 0;
//        int left = 0,right = nums.size()-1;
//        while (left < right -1){
//            int mid = (left + right) /2;
//            if(nums[0] < nums[mid]){
//                left = mid ;
//            } else{
//                right = mid;
//            }
//        }
//        return nums[left] > nums[right] ? right:left;
//    }
//    int search(vector<int>& nums, int target) {
//        if(nums.empty())
//            return -1;
//        int left = 0,right = nums.size()-1;
//        int _min = getmin(nums);
//        if(_min != 0){
//            if(nums[0] > target){
//                left = _min;
//            } else{
//                right = _min - 1;
//            }
//        }
//        while (left <= right){
//            int mid = (left + right)/2;
//            if(nums[mid] == target)
//                return mid;
//            else if(nums[mid] < target){
//                left = mid + 1;
//            } else{
//                right = mid - 1;
//            }
//        }
//        return -1;
//    }
//};

class Solution {
        public:
        int search(vector<int>& nums, int target) {
            if(nums.empty())
                return -1;
            int left = 0,right = nums.size()-1;
            while (left<= right){
                int mid = (left + right) / 2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid] < nums[right]){
                    if(nums[mid] < target && nums[right] >= target )
                        left = mid + 1;
                    else
                        right = mid - 1;
                } else{
                    if(nums[left]<= target & nums[mid] > target){
                        right = mid - 1;
                    }else{
                        left = mid + 1;
                    }
                }
            }
            return  -1;
        }
};