//
// Created by lh on 17-11-12.
//
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> vis(n,0);
        vector<int> tmp;
        helper(res,tmp,n,k,1);
        return res;
    }
    void helper(vector<vector<int>>& res,vector<int> tmp,int n,int k,int index){
        if(tmp.size() == k){
            res.push_back(tmp);
            return;
        }
        for (int i = index; i <=n ; ++i) {
            tmp.push_back(i);
            helper(res,tmp,n,k,i+1);
            tmp.pop_back();
        }
    }
};