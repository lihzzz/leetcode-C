//
// Created by lh on 2017/12/24.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index = 0,maxvalue = 0;
        int n = nums.size();
        auto a = max_element(nums.begin(),nums.end());
        index = a-nums.begin();
        maxvalue = *a;
        sort(nums.begin(),nums.end());
        if(2*nums[n-2] > maxvalue){
            return -1;
        }else{
            return index;
        }
    }
};