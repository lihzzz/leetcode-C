//
// Created by lh on 2017/9/16.
//
#include <vector>
#include <algorithm>
using std::vector;
using std::abs;
using std::sort;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0] + nums[1] + nums[2];

        int diff = abs(target - closest);
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size()-2; ++i) {
            int left = i + 1,right = nums.size()-1;
            while (left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int newdiff = abs(target - sum);
                if(newdiff < diff){
                    diff = newdiff;
                    closest = sum;
                }
                if(sum < target) left ++;
                else right--;
            }
        }
        return closest;
    }
};