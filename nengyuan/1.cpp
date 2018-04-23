//
// Created by lh on 2018/4/12.
//
#include <iostream>
using namespace std;
class Solution {
public:
    bool canJump(int A[], int n) {
        int curstep = 0;

        int start = 0;
        int end = 0;

        while (end < n-1){
            int pos = end;
            for (int i = start; i <= end ; ++i) {
                pos = max(pos,A[i]+i);
            }

            if(pos <= end)
                return false;
            start = end;
            end = pos;
        }
        return true;
    }
};