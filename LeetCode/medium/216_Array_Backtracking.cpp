//
// Created by lh on 2017/10/12.
//
#include <vector>
#include <numeric>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> vis(10,0);
        vector<vector<int>> res;
        vector<int> tmp;
        helper(res,vis,tmp,k,n);
        return res;
    }
    void helper(vector<vector<int>> &res,vector<int> vis,vector<int> tmp,int k,int n){
        if(k == 0){
            if(accumulate(tmp.begin(),tmp.end(),0) == n){
                res.push_back(tmp);
            }
            return;
        }
        for (int i = 1; i <10 ; ++i) {
            if(vis[i] == 0){
                tmp.push_back(i);
                vis[i] = 1;
                helper(res,vis,tmp,k-1,n);
                tmp.pop_back();
            }
        }
    }
};