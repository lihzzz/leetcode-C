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
        if(A.empty() || A.size() < 2){
            return;
        }
        mergeSort(A,0,A.size()-1);
    }

    void mergeSort(vector<int>& A,int l,int r){
        if(l == r){
            return;
        }
        int mid = l+((r-l) >> 1);
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,r);
        merge(A,l,mid,r);
        print(A,"Merge");
    }
    void merge(vector<int>& A,int l,int m,int r){
        vector<int> help(r-l+1,0);
        print(A,"merge");
        int i = 0;
        int p1 = l;
        int p2 = m+1;
        while(p1<=m&& p2<=r){
            help[i++] = A[p1]<A[p2]?A[p1++]:A[p2++];
        }
        while(p1<=m){
            help[i++] = A[p1++];
        }
        while(p2<=r){
            help[i++] = A[p2++];
        }
        for (int j = 0; j <help.size() ; ++j) {
            A[l+j] = help[j];
        }
        print(A,"mergeEnd");
    }

    void swap(vector<int>& A,int i,int j){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
    void print(const vector<int>&A,string str){
        cout << str << "  :";
        for (int i = 0; i <A.size() ; ++i) {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};