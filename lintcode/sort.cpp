//
// Created by lh on 2018/3/25.
//
#include "../tool.h"
class Solution {
public:
    /*
     * @param A: an integer array
     * @return:
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        if(A.empty()|| A.size()<2){
            return;
        }
        int size = A.size();
        quicksort(A,0,size-1);
    }
};