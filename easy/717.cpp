//
// Created by lll on 2017/10/30.
//
#include <vector>
using namespace std;
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        if(n<1)
            return false;
        int i = 0;
        for (; i <n-1; ++i) {
            if(bits[i] == 1){
                i+=1;
            }
        }
        if(i==n-1 && bits[i] == 0)
            return true;
        return false;
    }
};