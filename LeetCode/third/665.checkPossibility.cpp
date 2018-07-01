//
// Created by lihzz on 2018/7/1.
//
#include <vector>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.empty())
            return true;
        int cnt = 0;
        for (int i = 1; i <nums.size() ; ++i) {
            if(nums[i]>= nums[i-1])
                continue;
            ++cnt;
            if(i-2>=0 && nums[i-2] > nums[i]){
                nums[i]  = nums[i-1];
            }else{
                nums[i-1] = nums[i];
            }
        }
        return  cnt<=1;
    }
};