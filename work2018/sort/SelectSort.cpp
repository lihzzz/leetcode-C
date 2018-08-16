//
// Created by lihzz on 2018/8/10.
//
#include "../../common_header.h"
/**
 * 选择排序需要 ~N2/2 次比较和 ~N 次交换，它的运行时间与输入无关，这个特点使得它对一个已经排序的数组也需要这么多的比较和交换操作。
 */
class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        int n = A.size();
        int min = 0;
        for (int i = 0; i < n; ++i) {
            min = i;
            for (int j = i+1; j < n; ++j) {
                if(A[min] > A[j]){
                    min = j;
                }
            }
            swap(A,i,min);
        }
    }

    void swap(vector<int>& A,int i,int j){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
};