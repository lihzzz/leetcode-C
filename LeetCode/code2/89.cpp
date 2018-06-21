//
// Created by lh on 2017/9/14.
//
#include <vector>
#include <cmath>
using std::pow;
using std::vector;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res ;
        for (int i = 0; i <pow(2,n); ++i) {
            res.push_back((i>>1)^i);
        }
        return res;
    }
};