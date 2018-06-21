//
// Created by lh on 2017/10/3.
//
#include <vector>
#include <algorithm>

using std::unique;
using std::vector;
//class Solution {
//public:
//    int singleNonDuplicate(vector<int>& nums) {
//        int res = 0;
//        for (int i = 0; i <nums.size() ;) {
//            if(nums[i] != nums[i+1] || i+1 == nums.size()){
//                res = nums[i];
//                break;
//            }
//            i += 2;
//        }
//        return res;
//    }
//};
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0 ,right = nums.size()-1;
        while (left<right){
            int mid = left + (right-left)/2;
            int even = (mid%2==0)?nums[mid]:nums[mid-1];
            int nextnum = (mid%2 == 0)?nums[mid+1]:nums[mid];

            if(even == nextnum){
                left = mid +1;
            } else{
                right = (mid/2)*2;
            }
        }
        return nums[left];
    }
};