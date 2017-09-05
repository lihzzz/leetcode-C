//
// Created by lh on 2017/9/5.
//

#include <vector>

using namespace std;

class Solution{
public:
    int lengthOfLIS(vector<int>& nums){
        int _max = 0;
        if(nums.size() == 0)
            return 0;
        vector<int> dp(nums.size(),1);
        for (int i = 0; i <nums.size() ; ++i) {
            for (int j = 0; j <i ; ++j) {
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[j]+1,dp[i]);
                }
            }
            if(dp[i] > _max){
                _max = dp[i];
            }
        }
        return _max;
    }
};