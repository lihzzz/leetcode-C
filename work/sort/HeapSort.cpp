//
// Created by lihzz on 2018/8/12.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers(vector<int> &A) {
        // write your code here
        if(A.size() == 0 || A.size()<2){
            return;
        }
        for (int i = 0; i <A.size() ; ++i) {
            heapInsert(A,i);
            print(A,"heapInsert");
        }
        int size = A.size();
        swap(A,0,--size);
        print(A,"swap");
        while(size>0){
            heapify(A,0,size);
            print(A,"heapify");
            swap(A,0,--size);
            print(A,"swap");
        }
    }

    void heapInsert(vector<int> &A, int index) {
        while (A[index] > A[(index - 1) / 2]) {
            swap(A, index, (index - 1) / 2);
            index = (index - 1) / 2;
        }
    }

    void heapify(vector<int>& A, int index, int size) {
        int left = index * 2 + 1;//左孩子
        while (left < size) {
            int largest = left + 1 < size && A[left + 1] > A[left] ? left + 1 : left;//找到孩子节点中较大的那一个和父节点作比较
            largest = A[largest]>A[index]?largest:index;
            if(largest == index){
                break;
            }
            swap(A,largest,index);
            index = largest;
            left = index*2+1;
        }
    }

    void swap(vector<int> &A, int i, int j) {
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