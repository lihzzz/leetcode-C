//
// Created by lh on 2017/9/22.
//
#include <string>
#include <climits>
#include <vector>
#include <cmath>
using std::to_string;
using std::string;
using std::vector;
//class Solution {
//public:
//    string toHex(int num) {
//        string res = "";
//        if(num == 0) return "0";
//        unsigned int x = num;
//        int n = 7;
//        if(num < 0) x = UINT_MAX + num + 1;
//        vector<string> v{"a","b","c","d","e","f"};
//        while (x>0){
//            int t = pow(16,n);
//            int d = x / t;
//            if(d>=10) res += v[d-10];
//            else if(d>=0) res += to_string(d);
//            x %= t;
//            --n;
//        }
//        while (n-->=0) res += to_string(0);
//        while (!res.empty()&& res[0] == '0')res.erase(res.begin());
//        return res.empty()?"0":res;
//    }
//};

class Solution {
public:
    string toHex(int num) {
        string res = "";
        for (int i = 0; i <8&&num ; ++i) {
            int t = num & 0xf;
            if(t>=10) res = char('a' + t - 10) +res;
            else res = char('0' + t) + res;
            num >>= 4;
        }
        return res.empty()?"0":res;
    }
};