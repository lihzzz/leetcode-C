//
// Created by lihzz on 2018/8/13.
//

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
        quickSort(A,0,A.size()-1);
    }

    void quickSort(vector<int>& A,int l,int r){
        int temp = A[l];
        if(l>r)
            return;
        int i = l;
        int j = r;
        while(i!=j){
            while(A[j]>=temp && i<j){
                j--;
            }
            while(A[i]<= temp && i<j){
                i++;
            }
            if(i<j){
                swap(A,i,j);
                print(A,"");
            }
        }
        A[l] = A[i];
        A[i] = temp;
        print(A,"");
        quickSort(A,l,i-1);
        quickSort(A,i+1,r);

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