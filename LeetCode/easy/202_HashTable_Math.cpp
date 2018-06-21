//
// Created by lh on 2017/9/22.
//
#include <set>
using std::set;

class Solution {
public:
    bool isHappy(int n) {
        set<int> appear;
        while (true){
            int sum = 0,number;
            while(n){
                number = n % 10;
                sum += number * number;
                n /= 10;
            }
            if(sum == 1)
                return true;
            else if(appear.count(sum))
                return false;
            else {
                appear.insert(sum);
                n = sum;
            }
        }
    }
};