//
// Created by lh on 2017/8/27.
//
#include <climits>
#include <vector>
//class Solution{
//public:
//    int reverse(int x){
//        long long  ans =0;
//        while (x){
//            ans = ans*10 + x % 10;
//            x /= 10;
//        }
//        return ans < INT_MIN || ans > INT_MAX ? 0:ans;
//    }
//};

class Solution{
public:
    int reverse(int x){
        int res =0;
        while (x){
            int newres = res*10 + x % 10;
            if((newres - x %10) / 10 != res){
                return 0;
            }
            res = newres;
            x /= 10;
        }
        return res;
    }
};