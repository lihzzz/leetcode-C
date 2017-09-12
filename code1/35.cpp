//
// Created by lh on 2017/9/11.
//
#include <vector>
using std::vector

class Solution{
public:
    int searchInsert(vector<int>& nums,int target){
        int l = 0,r=nums.size()-1;
        int mid = 0;
        while (l<r){
            mid = (l+r)/2;
            if(nums[mid] < target){
                l = mid + 1;
            } else{
                r = mid;
            }
        }
        return nums[l] < target ? l+1:l;
    }
};