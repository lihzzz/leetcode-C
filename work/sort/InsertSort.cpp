//
// Created by lihzz on 2018/8/10.
//

/**
 *
 *
插入排序的复杂度取决于数组的初始顺序，如果数组已经部分有序了，逆序较少，那么插入排序会很快。
平均情况下插入排序需要 ~N2/4 比较以及 ~N2/4 次交换；
最坏的情况下需要 ~N2/2 比较以及 ~N2/2 次交换，最坏的情况是数组是倒序的；
最好的情况下需要 N-1 次比较和 0 次交换，最好的情况就是数组已经有序了。
 */
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
        for (int i = 1; i <n  ; ++i) {
            for (int j = i; j > 0 && A[j]<A[j-1] ; --j) {
                swap(A,j,j-1);
            }
        }
    }
    void swap(vector<int>& A,int i,int j){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
};