//
// Created by JO on 2017/11/29.
//
#include <vector>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(),i=0;
        while (i<n){
            if(nums[i] != i+1 && nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i]-1]){
                swap(nums[i], nums[nums[i]-1]);
            }
            else i++;
        }
        for (int j = 0; j <n ; ++j) {
            if(nums[j] != j+1)return j+1;
        }
        return n+1;
    }
};

