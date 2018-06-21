//
// Created by lh on 2017/10/9.
//
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Solution {
public:
    string fractionAddition(string expression) {
        istringstream is(expression);
        int num = 0, dem = 0, A = 0, B = 1;
        char c;
        while (is >> num >> c >> dem) {
            A = A * dem + num * B;
            B *= dem;
            int g = abs(gcd(A, B));
            A /= g;
            B /= g;
        }
        return to_string(A) + "/" + to_string(B);
    }
    int gcd(int a,int b){
        return (b==0)?a:gcd(b,a%b);
    }
//    int CommonLevels(int a,int b){
//        int even = 1;
//        while(true) {
//            while (a % 2 == 0 && b % 2 == 0) {
//                a = a / 2;
//                b = b / 2;
//                even *= 2;
//            }
//            int sub = a > b ? a - b : b - a;
//            if (sub == (a > b ? b : a)) {
//                return sub * even;
//            }
//            if (a > b) a = sub;
//            else b = sub;
//        }
//    }
};