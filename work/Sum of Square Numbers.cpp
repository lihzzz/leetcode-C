//
// Created by lihzz on 2018/8/16.
//
#include "../common_header.h"
#include <cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0,j=(int)sqrt(c);
        while (i<=j){
            int powSum = i*i+j*j;
            if(powSum == c){
                return true;
            }else if(powSum > c){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};