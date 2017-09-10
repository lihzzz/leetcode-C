//
// Created by lh on 2017/9/10.
//

#include <vector>
using std::vector;
using std::max;
class Solution{
public:
    int maxProduct(vector<int>& nums){
        if(nums.empty())
            return 0;
        int _max = nums[0],tmp=0;
        for (int i = 0; i <nums.size() ; ++i) {
            tmp = nums[i];
            _max = max(_max,tmp);
            for (int j = i+1; j <nums.size() ; ++j) {
                tmp = tmp * nums[j];
                _max = max(_max,tmp);
            }
        }
        return _max;
    }
};