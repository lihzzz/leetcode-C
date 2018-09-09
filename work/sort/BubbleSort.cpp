//
// Created by lihzz on 2018/8/10.
//
#include "../../common_header.h"
class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        int n = A.size();
        bool isSort = false;
        for (int i = 0; i <n && !isSort ; ++i) {
            isSort = true;
            for (int j = 0; j < n-i-1 ; ++j) {
                if(A[j] > A[j+1]){
                    isSort = false;
                    swap(A,j,j+1);
                }
            }
        }
    }
    void swap(vector<int>& A,int i,int j){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
};