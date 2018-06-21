//
// Created by lh on 2017/9/18.
//

#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(), n = nums[0].size();
        if (m * n != r * c)
            return nums;
        vector<vector<int>> res(r, vector<int>(c));
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                int index = i * c + j;
                res[i][j] = nums[index / n][index % n];
            }
        }
        return res;
    }
};