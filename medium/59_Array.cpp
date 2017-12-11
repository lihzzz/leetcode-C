//
// Created by lh on 2017/12/11.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> >res(n,vector<int>(n,0));
        int num = 1;
        int p = n,q = n;
        int c = (n+1)/2;
        for (int i = 0; i <c ; ++i,p-=2,q-=2) {
            for (int col = i; col <i+q ; ++col) {
                res[i][col] = num++;
            }
            for (int row = i+1; row <i+p ; ++row) {
                res[row][i+p-1] = num++;
            }
            if(p == 1|| q == 1)
                break;
            for (int col = i+p-2; col >=i ; --col) {
                res[i+p-1][col] = num++;
            }
            for (int row = i+q-2; row >i ; --row) {
                res[row][i] = num++;
            }
        }
        return res;
    }
};