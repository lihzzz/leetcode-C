//
// Created by lihzz on 2018/7/11.
//
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    const vector<string> keyboard { " ", "", "abc", "def", // '0','1','2',...
                                    "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    vector<string> letterCombinations(string digits) {

        vector<string> res;
        if(digits.empty()){
            return res;
        }
        string str = "";
        helper(res,0,str,digits);
        return res;
    }

private:
    void helper(vector<string>& res,int start,string str,const string digits){
        if(str.size() == digits.size()){
            res.push_back(str);
            return;
        }
        for (int i = start; i <digits.size() ; ++i) {
            int cur = digits[i] - '0';
            for (int j = 0; j <keyboard[cur].size() ; ++j) {
                str.push_back(keyboard[cur][j]);
                helper(res,i+1,str,digits);
                str.pop_back();
            }
        }
    }
};