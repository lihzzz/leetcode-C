//
// Created by lll on 2017/10/31.
//
#include <vector>
#include <queue>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int N = 1000000,n = nums.size(),left = 0 ,high = 1000000;
        while(left < high){
            int mid = left + (high-left)/2;
            cnt = 0;
            for (int i = 0,j=0; i <n ; ++i) {
                while (j<n && nums[j]-nums[i]<= mid) j++;
                cnt += j-i-1;
            }
            if(cnt < k)
                left = mid+1;
            else
                high = mid;
        }
        return left;
    }
};