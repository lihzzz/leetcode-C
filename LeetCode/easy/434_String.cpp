//
// Created by lh on 2017/9/26.
//
#include <string>
#include <sstream>
using std::string;
class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        std::stringstream ss(s);
        string sinstring;
        while (ss>>sinstring)
            ++res;
        return res;
    }
};