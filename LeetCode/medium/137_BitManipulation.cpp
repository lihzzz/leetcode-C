//
// Created by lh on 2017/11/28.
//
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i <32 ; ++i) {
            int sum = 0 ;
            for (auto& a:nums) {
                sum += (a>>i)&1;
            }
            res |= (sum % 3) << i;
        }
        return res;
    }
};