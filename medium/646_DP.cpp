//
// Created by lh on 2017/10/7.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int  n = pairs.size(),res = 1,minnum ;
        sort(pairs.begin(),pairs.end(),[](vector<int>& a,vector<int>& b){
            return a[1] < b[1];
        });
        minnum = pairs[0][1];
        for (int i = 1; i <n ; ++i) {
            if(pairs[i][0] > minnum){
                res++;
                minnum = pairs[i][1];
            }
        }
        return res;
    }
};