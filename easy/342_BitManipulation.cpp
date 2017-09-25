//
// Created by lh on 2017/9/25.
//

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num == 0)
            return false;
        int x = 1,start = 1;
        while (x<32){
            if(num == start << x)
                return true;
            if(start << x >num)
                break;
            x += 2;
        }
        return false;
    }
};