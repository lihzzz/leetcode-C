//
// Created by lh on 2017/9/19.
//
#include <vector>
using std::vector;
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty())
            return m*n;
        int min_x = ops[0][0],min_y=ops[0][1];
        for (int i = 1; i <ops.size() ; ++i) {
            min_x = min_x > ops[i][0]?ops[i][0]:min_x;
            min_y = min_y > ops[i][1]?ops[i][1]:min_y;
        }
        return min_x*min_y;
    }
};