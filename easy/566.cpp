//
// Created by lh on 2017/9/18.
//

#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(),n=nums[0].size();
        if(m * n < r*c)
            return nums;
        vector<vector<int>> res;
        vector<int> row;
        int index = 0,_index=0;
        for (int i = 0; i <m*n ; ++i) {
            if(i/n > index){
                index ++;
            }
            if(i/c > _index){
                _index++;
                res.push_back(row);
                row.clear();
            }
            row.push_back(nums[index][i%n]);
        }
        res.push_back(row);
        return res;
    }
};