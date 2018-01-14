//
// Created by lh on 2018/1/14.
//
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int res = 0;
        for(auto&i: row)
            i = i/2;
        for(vector<int>::iterator it=row.begin();it!=row.end();it+=2){
            if(*it != *(it+1)){
                auto index = find(it+2,row.end(),*it);
                iter_swap(it+1,index);
                ++res;
            }
        }
        return res;
    }
};