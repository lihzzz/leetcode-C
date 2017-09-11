//
// Created by lh on 2017/9/11.
//

class Solution{
public:
    int arrangeCoins(int n){
        int res =0 ,step = 1;
        while (true){
            n -= step;
            if(n>=0){
                res ++;
                step ++;
            }
            else
                break;
        }
        return res;
    }
};
