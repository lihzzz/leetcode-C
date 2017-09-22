//
// Created by lh on 2017/9/22.
//
#include <cstdint>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (n){
            res += (n&1);
            n >>= 1;
        }
        return res;
    }
};