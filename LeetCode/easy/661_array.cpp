//
// Created by lh on 2017/9/20.
//
#include <vector>
using std::vector;


class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int count = 0,sum=0;

        if(M.empty())
            return {{}};

        int x=M.size(),y=M[0].size();
        vector<vector<int>> res(x,vector<int>(y,0));
        for (int i = 0; i <x ; ++i) {
            for (int j = 0; j <y ; ++j) {
                getsum(M,i,j,count,sum);
                res[i][j] = sum/count;
            }
        }
        return res;
    }
    void getsum(vector<vector<int>> M,int x,int y,int& count,int& sum){
        sum = 0;
        count = 0;
        for (int i = x-1; i <=x+1 ; ++i) {
            if(i<0||i>=M.size())
                continue;
            for (int j = y-1; j <=y+1; ++j) {
                if(j<0||j>=M[0].size())
                    continue;
                sum += M[i][j];
                count ++;
            }
        }
    }
};
