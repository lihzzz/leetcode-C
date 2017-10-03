//
// Created by lh on 2017/10/3.
//
#include <vector>
#include <algorithm>

using std::unique;
using std::vector;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res = 0;
        if(!nums.empty()){
            int n = nums.size();
            vector<int>::iterator it =  unique(nums.begin(),nums.end());
            for (int i = 0; i <(n+1)/2 ; ++i) {
                if(nums[i]!=*it){
                    res = nums[i];
                    break;
                }
                ++it;
            }
        }
        return res;
    }
};