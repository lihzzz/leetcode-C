//
// Created by lh on 2017/9/13.
//
class Solution {
public:
    int mySqrt(int x) {
        long long left  = 0,right = (x / 2) + 1;

        while (left <= right){
            long long mid = (left + right) / 2;
            long long  res = mid * mid;
            if(res == x)
                return mid;
            if(res < x){
                left = mid + 1;
            }else{
                right = mid-1;
            }
        }
        return right;
    }
};

