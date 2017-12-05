//
// Created by lh on 2017/12/5.
//
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        string res ="";
        int n = num.size(),keep = n-k;
        for(auto& a :num){
            while (k && res.size() && res.back() > a){
                res.pop_back();
                --k;
            }
            res.push_back(a);
        }
        res.resize(keep);
        while (!res.empty() && res[0] == '0')
            res.erase(res.begin());
        return res.empty()?"0":res;
    }
};