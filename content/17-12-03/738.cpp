//
// Created by lh on 17-12-3.
//

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        int num = N;
        int cur=0,next = 0;
        while(num != 0){
            next = num%10;
            num /= 10;
            if(cur < next){
                break;
            }
            cur = next;
        }

    }
};