//
// Created by lh on 2017/9/30.
//
#include <string>
using std::string;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty() || haystack == needle)return 0;
        int h = haystack.size(),n = needle.size();
        if(n>h) return -1;
        for (int i = 0; i <h-n+1 ; ++i) {
            string tmp = haystack.substr(i,n);
            if(tmp.compare(needle) == 0)
                return i;
        }
        return -1;
    }
};