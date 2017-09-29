//
// Created by lh on 2017/9/29.
//

#include <vector>
using std::vector;
using std::swap;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.empty() || nums.size()==1)
            return 0;
        int start = -1,index=0,res = 0;
        for (int i = 1; i <nums.size() ; ++i) {
            if(nums[i] < nums[i-1]) {
                index = i;
                while (index > 0 && nums[index] < nums[index - 1]) {
                    int tmp = nums[index];
                    nums[index] = nums[index - 1];
                    nums[index - 1] = tmp;
                    --index;
                }
                if (start == -1 || start > index) {
                    start = index;
                }
                res = std::max(res, i - start + 1);
            }
        }
        return res;
    }
};