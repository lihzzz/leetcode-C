//
// Created by lh on 2017/10/12.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {

        if(matrix.empty() || matrix[0].empty())
            return {};
        int m = matrix.size(),n = matrix[0].size();
        vector<int> res(m*n,0);
        vector<vector<int>>dirs{{-1,1},{1,-1}};
        int r = 0,c = 0,k = 0;
        for (int i = 0; i <m*n ; ++i) {
            res[i] = matrix[r][c];
            r += dirs[k][0];
            c += dirs[k][1];
            if(r > m-1){
                c += 2;
                r = m - 1;
                k = 1-k;
            }
            if(c > n-1){
                r += 2;
                c = n-1;
                k = 1-k;
            }
            if(r<0){
                r = 0;
                k = 1-k;
            }
            if(c<0){
                c = 0;
                k = 1-k;
            }
        }
        return res;
    }
};