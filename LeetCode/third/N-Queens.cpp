//
// Created by lihzz on 2018/7/10.
//
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> loc(n,0);
        process(res,0,loc,n);
        return res;
    }

    void process(vector<vector<string>>& res,int start,vector<int> loc,int n){
        if(start == n){
            vector<string> cur;
            int index = 0;
            for (int i = 0; i < n; ++i) {
                string line = "";
                for (int j = 0; j < n; ++j) {
                    if(j == loc[i]){
                        line += "Q";
                    }else{
                        line += ".";
                    }
                }
                cur.push_back(line);
            }
            res.push_back(cur);
            return;
        }
        for (int i = 0; i <n ; ++i) {
            if(isValid(loc,start,i)){
                loc[start] = i;
                process(res,start+1,loc,n);
            }
        }
    }

    bool isValid(vector<int> loc,int i,int j){
        for (int k = 0; k < i ; ++k) {
            if(j == loc[k] || abs(loc[k] - j) == abs(i-k)){
                return false;
            }
        }
        return true;
    }
};