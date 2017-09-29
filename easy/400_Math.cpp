//
// Created by lh on 2017/9/29.
//
#include <string>
using std::string;
class Solution {
public:
    int findNthDigit(int n) {
        long long len =1,start = 1,cnt = 9;
        while (n>len*cnt){
            n -= len*cnt;
            ++len;
            start *= 10;
            cnt *= 10;
        }
        start += (n-1)/len;
        string t = std::to_string(start);
        return t[(n-1)%len] - '0';
    }
};