//
// Created by lh on 2018/3/12.
//

class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1.0;
        bool flag = 0;
        if(base == 0 && exponent<=0){
            return 0.0;
        }
        if(exponent < 0){
            exponent = -exponent;
            flag = true;
        }

        for (int i = 1; i <=exponent ; ++i) {
            res *= base;
        }
        if(flag){
            res = 1.0/res;
        }
        return res;

    }


};