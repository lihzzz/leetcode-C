//
// Created by lh on 2017/9/8.
//
#include <vector>
using namespace std;
//class Solution{
//public:
//    int climbStairs(int n){
//        int p = 1,q = 1;
//        for (int i = 2; i <=n ; ++i) {
//            int temp = q;
//            q += p;
//            p = temp;
//        }
//        return q;
//    }
//};

//class Solution{
//public:
//    int climbStairs(int n){
//        if(n<=1) return 1;
//        vector<int> dp(n,0);
//        dp[0]=1;dp[1] = 2;
//        for (int i = 2; i <n ; ++i) {
//            dp[i] = dp[i-1] + dp[i-2];
//        }
//        return dp.back();
//    }
//};

class Solution{
public:
    int climbStairs(int n){
        int a = 1,b = 1;
        while (n--){
            b += a;
            a = b-a;
        }
        return a;
    }
};