//
// Created by lh on 2017/9/25.
//

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        int sum = 0;
        for (int i = 1; i <=num/2 ; ++i) {
            sum = i*i;
            if(sum == num)
                return true;
            else if(sum > num)
                return false;
        }
        return false;
    }
};