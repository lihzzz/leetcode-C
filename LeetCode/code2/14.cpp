//
// Created by lh on 2017/9/15.
//
#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.empty()) return res;
        for (int i = 0; i <strs[0].size() ; ++i) {
            for (int j = 1; j <strs.size() ; ++j) {
                if(strs[j][i] != strs[0][i])
                    return res;
            }
            res.push_back(strs[0][i]);
        }
        return res;
    }
};