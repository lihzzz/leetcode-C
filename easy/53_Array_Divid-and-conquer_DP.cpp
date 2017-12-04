//
// Created by lh on 2017/12/4.
//
#include <vector>
using namespace std;
class Solution{
public:
    int maxSubArray(vector<int>& nums){
        if(nums.empty())
            return 0;
        int maxres = nums[0];
        int localmax = nums[0];
        for (int i = 1; i <nums.size() ; ++i) {
            localmax = max(localmax+nums[i],nums[i]);
            maxres = max(localmax,maxres);
        }
        return maxres;
    }
};