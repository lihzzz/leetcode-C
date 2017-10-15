//
// Created by lh on 2017/10/15.
//
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int countBinarySubstrings(string s) {
        int prelen = 1, curlen = 1,res = 0;
        for (int i = 1; i <s.size() ; ++i) {
            if(s[i] == s[i-1]) ++curlen;
            else{
                prelen = curlen;
                curlen = 1;
            }
            if(prelen>= curlen) ++res;
        }
        return res;
    }
};