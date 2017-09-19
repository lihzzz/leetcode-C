//
// Created by lh on 2017/9/19.
//
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int res=0;
        reverse(s.begin(),s.end());
        for (int i = 0; i <len ; ++i) {
            res += (s[i] - 'A' + 1) * pow(26,i);
        }
        return res;
    }
};