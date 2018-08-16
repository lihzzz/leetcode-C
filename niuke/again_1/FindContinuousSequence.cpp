//
// Created by lihzz on 2018/7/19.
//
#include "../../common_header.h"
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> res;


        int count = 0;
        for (int i = 1; i < 50; ++i) {
            vector<int> tmp;
            for (int j = i;; ++j) {
                count += j;
                tmp.push_back(j);
                if(count > 100)
                    break;
                else if(count == sum && tmp.size() > 1){
                    res.push_back(tmp);
                }
            }
            count = 0;
        }
        return res;

    }
};