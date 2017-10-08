//
// Created by lh on 2017/10/8.
//

class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==0){
            return false;
        }
        bool res = true;
        int pre = (n & 1);
        n >>= 1;
        while (n){
            if((n&1)!=pre){
                pre = (n & 1);
                n >>= 1;
            } else{
                return false;
            }
        }
        return res;
    }
};