//
// Created by lihzz on 2018/7/11.
//
#include <vector>

using namespace std;
class Solution {
public:
    typedef vector <vector<int>> vec;
    vector<vector<int>> combine(int n, int k) {
        vec res;
        if(n<k || n == 0){
            return res;
        }
        vector<int> tmp;
        helper(res,1,tmp,n,k);
        return res;
    }

private:
    void helper(vec& res,int start,vector<int> tmp,int n,int k){
        if(tmp.size() == k){
            res.push_back(tmp);
            return;
        }
        for (int i = start; i <=n ; ++i) {
            tmp.push_back(i);
            helper(res,i+1,tmp,n,k);
            tmp.pop_back();
        }
    }
};