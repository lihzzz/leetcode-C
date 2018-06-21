//
// Created by lh on 2017/9/10.
//
#include <vector>
using std::vector;
using std::max;
class Solution{
public:
    int jump(vector<int>& nums){
        int cur=0,location = 0,pre = 0;
        int res = 0;
        while (cur < nums.size() - 1){
            pre = cur;
            while (location<=pre){
                cur = max(cur,location+nums[location]);
                location ++ ;
            }
            res ++ ;
            if(pre == cur) return -1;
        }
        return res;
    }
};
