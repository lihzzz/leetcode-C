//
// Created by lh on 2017/10/12.
//
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if(n==0)
            return {};
        vector<string> res;
        string tmp;
        helper(res,tmp,n,n);
        return res;
    }
    void helper(vector<string>& res,string tmp,int left,int right){
        if(left == 0 && right == 0){
            if(isvalid(tmp))
                res.push_back(tmp);
        }
        if(left != 0) helper(res,tmp+'(',left-1,right);
        if(right != 0) helper(res,tmp+')',left,right-1);

    }
    bool isvalid(string parentheses){
        int left = 0;
        for(auto a:parentheses){
            if(a=='(')
                ++left;
            else
                --left;
            if(left<0)
                return false;
        }
        return true;
    }
};
