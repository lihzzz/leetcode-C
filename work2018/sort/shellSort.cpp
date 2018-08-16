//
// Created by lihzz on 2018/8/13.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        if(A.empty() || A.size() < 2){
            return;
        }
        int n = A.size();
        for (int gap = n/2; gap >0; gap/=2) {
            for (int i = gap; i <n ; ++i) {
                int j = i;
                while(j-gap>=0 && A[j]<A[j-gap]){
                    swap(A,j,j-gap);
                    j-=gap;
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