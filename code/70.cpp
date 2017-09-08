//
// Created by lh on 2017/9/8.
//

class Solution{
public:
    int climbstairs(int n){
        int p = 1,q = 1;
        for (int i = 2; i <=n ; ++i) {
            int temp = q;
            q += p;
            p = temp;
        }
        return q;
    }
};