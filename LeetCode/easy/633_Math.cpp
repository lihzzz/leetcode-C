//
// Created by lh on 2017/9/29.
//
#include <cmath>
using std::sqrt;
//class Solution {
//public:
//    bool judgeSquareSum(int c) {
//        for (int i = sqrt(c); i >=0 ; --i) {
//            int a = i*i;
//            if(a == c) return true;
//            int b = c-a,t = sqrt(b);
//            if(t*t== b)return true;
//        }
//        return false;
//    }
//};

class Solution {
public:
    bool judgeSquareSum(int c) {
        int a = 0 ,b = sqrt(c);
        while (a<= b){
            if(a*a + b*b == c) return true;
            else if(a*a + b*b < c)
                ++a;
            else
                --b;
        }
        return false;
    }
};