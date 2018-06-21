//
// Created by lh on 2017/10/4.
//
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::to_string;
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string res ="";
        if(nums.empty())
            return res;
        int n = nums.size();
        res = to_string(nums[0]);
        if(n==1) return res;
        if(n==2) return res + "/" +to_string(nums[1]);
        res = res + "/(" + to_string(nums[1]);
        for (int i = 2; i <nums.size() ; ++i) {
            res += "/" + to_string(nums[i]);
        }
        return res + ")";
    }
};
