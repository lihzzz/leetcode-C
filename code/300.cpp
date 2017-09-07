//
// Created by lh on 2017/9/5.
//

#include <vector>
#include <iostream>
using namespace std;

//class Solution{
//public:
//    int lengthOfLIS(vector<int>& nums){
//        int _max = 0;
//        if(nums.size() == 0)
//            return 0;
//        vector<int> dp(nums.size(),1);
//        for (int i = 0; i <nums.size() ; ++i) {
//            for (int j = 0; j <i ; ++j) {
//                if(nums[j] < nums[i]){
//                    dp[i] = max(dp[j]+1,dp[i]);
//                }
//            }
//            if(dp[i] > _max){
//                _max = dp[i];
//            }
//        }
//        return _max;
//    }
//};

class Solution{
public:
    int CeilIndex(vector<int>& nums,int l,int r,int key){
        while (l<=r){
            int m = (l+r)/2;
            if(nums[m] >= key){
                r = m-1;
            }else{
                l = m + 1;
            }
        }
        return l;
    }
    int lengthOfLIS(vector<int>& nums){
        if(nums.size() == 0)
            return 0;
        vector<int> tail(nums.size(),0);
        int length = 1;
        tail[0] = nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i] < tail[0])
                tail[0] = nums[i];
            else if(nums[i] > tail[length-1])
                tail[length++] = nums[i];
            else
                tail[CeilIndex(tail,0,length-1,nums[i])] = nums[i];
        }
        for (int j = 0; j <nums.size() ; ++j) {
            cout << tail[j] << " ";
        }

        return length;
    }
};