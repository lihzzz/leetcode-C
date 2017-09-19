//
// Created by lh on 2017/9/19.
//
#include <string>
using std::max;
using std::string;
class Solution {
public:
    int findLUSlength(string a, string b) {
        return a==b?-1:max(a.length(),b.length());
    }
};