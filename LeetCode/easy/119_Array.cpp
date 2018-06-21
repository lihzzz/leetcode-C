//
// Created by lh on 2017/9/26.
//
#include <vector>
using std::vector;
//class Solution {
//public:
//    vector<int> getRow(int rowIndex) {
//        vector<vector<int>> res;
//        if(rowIndex<=0)
//            return {1};
//        res.assign(rowIndex+1,vector<int>(1));
//
//        for (int i = 0; i <=rowIndex ; ++i) {
//            res[i][0] = 1;
//            if(i == 0) continue;
//            for (int j = 1; j <i ; ++j) {
//                res[i].push_back(res[i-1][j]+res[i-1][j-1]);
//            }
//            res[i].push_back(1);
//        }
//        return res.back();
//    }
//};


//class Solution {
//public:
//    vector<int> getRow(int rowIndex) {
//        vector<int> res ;
//        if(rowIndex<0) return res;
//        for (int i = 0; i <=rowIndex ; ++i) {
//            if(i==0 || i==rowIndex)
//                res.push_back(1);
//            else
//                res.push_back(comb(rowIndex,i));
//        }
//        return res;
//    }
//
//    int comb(int a,int b){
//        if(b>a) return 0;
//        else if(b>a/2) b = a-b;
//        int dividend = 1,divisor = 1;
//        for (int i = 0; i <b ; ++i) {
//            dividend *= a-i;
//            divisor *= b-i;
//        }
//        if(divisor != 0) return dividend/divisor;
//        else return 0;
//    }
//};


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex<0) return res;
        res.assign(rowIndex+1,0);
        for (int i = 0; i <= rowIndex ; ++i) {
            if(i == 0 ){
                res[i] = 1;
                continue;
            }
            for (int j = rowIndex; j >=1 ; --j) {
                res[j] = res[j-1] + res[j];
            }
        }
        return res;
    }
};