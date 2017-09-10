//
// Created by lh on 2017/9/10.
//
#include <vector>
#include <algorithm>
using std::vector;
//class Solution{
//public:
//    int maxSubArray(vector<int>& nums){
//        if(nums.size() == 0)
//            return 0;
//        int global = nums[0],local = nums[0];
//        for (int i = 1; i <nums.size() ; ++i) {
//            local = std::max(local+nums[i],nums[i]);
//            global = std::max(local,global);
//        }
//        return global;
//    }
//};

class Solution{
public:
    int dev(vector<int>& nums,int left,int right){
        if(left >= right) return nums[left];
        int mid = (left + right) / 2;
        int lmax = dev(nums,left,mid-1);
        int rmax = dev(nums,mid+1,right);
        int mmax = nums[mid],t = mmax;
        for (int i = mid-1; i >= left ; --i) {
            t += nums[i];
            mmax = std::max(mmax,t);
        }
        t = mmax;
        for (int j = mid+1; j <=right ; ++j) {
            t += nums[j];
            mmax = std::max(mmax,t);
        }

        return std::max(mmax,std::max(lmax,rmax));
    }
    int maxSubArray(vector<int>& nums){
        if(nums.empty()) return 0;
        return dev(nums,0,nums.size()-1);
    }
};
