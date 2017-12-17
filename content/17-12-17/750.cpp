//
// Created by lh on 2017/12/17.
//
#include <vector>
using namespace std;
class Solution {
public:
    int countCornerRectangles(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int res = 0;
        for (int i = 0; i <m ; ++i) {
            for (int j = 0; j <n ; ++j) {
                for (int k = i+1; k < m && grid[i][j] ; ++k) {
                    for (int l = j+1; l < n && grid[k][j] ; ++l) {
                        if(grid[i][l] && grid[k][l])
                            res++;
                    }
                }
            }
        }
        return res;
    }
};