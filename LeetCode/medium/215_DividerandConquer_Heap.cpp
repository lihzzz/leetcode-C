//
// Created by lh on 2017/12/18.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0,right = nums.size()-1;
        while (true){
            int pos = findpos(nums,left,right);
            if(pos == k-1) return nums[pos];
            else if(pos > k-1) right = pos-1;
            else left = pos+1;
        }
    }
    int findpos(vector<int>& nums,int left,int right){
        int pivot = nums[left],l = left+1;
        while (l <= right){
            if(nums[l]<pivot && nums[right]>pivot){
                swap(nums[l++],nums[right--]);
            }
            if(nums[l]>= pivot) l++;
            if(nums[right] <= pivot) right--;
        }
        swap(nums[left],nums[right]);
        return right;
    }
};