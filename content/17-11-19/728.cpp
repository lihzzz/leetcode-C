//
// Created by lh on 2017/11/19.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right ; ++i) {
            if(i == 0)
                continue;
            int cur = i;
            while (cur != 0){
                int divi = cur % 10;
                if(divi == 0 || i % divi!=0){
                    break;
                }
                cur /= 10;
            }
            if(cur == 0){
                res.push_back(i);
            }
        }
        return res;
    }
//    bool iscontainzero(int num){
//        while (num != 0){
//            if(num % 10 == 0){
//                return true;
//            }else{
//                num /= 10;
//            }
//        }
//        return false;
//    }
};