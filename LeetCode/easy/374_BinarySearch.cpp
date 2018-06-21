//
// Created by lh on 2017/9/26.
//


class Solution {
public:
    int guessNumber(int n) {
        int left = 1,right = n;
        while(left <= right){
            int mid = (left+right)/2;
            int status = guess(mid);
            if(status ==-1){
                right = mid-1;
            }else if(status == 1){
                left = mid + 1;
            }else if(status == 0)
                return mid;
        }
    }
    int guess(int num){};
};