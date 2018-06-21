//
// Created by lh on 2017/9/29.
//
#include <vector>
#include <algorithm>
#include <limits.h>

using std::vector;
using std::sort;
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int res = 0,n =heaters.size();
        sort(heaters.begin(),heaters.end());
        for (int house:houses) {
            int left = 0,right = n;
            while (left<right){
                int mid = left + (right-left)/2;
                if(heaters[mid]<house)
                    left = mid+1;
                else
                    right = mid;
            }
            int a =(right==n)?INT_MAX:heaters[right]-house;
            int b = (right == 0)?INT_MAX:house-heaters[right-1];
            res = std::max(res,std::min(a,b));
        }
        return res;
    }
};