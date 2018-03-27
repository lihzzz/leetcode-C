//
// Created by lh on 2018/3/9.
//
#include <vector>
#include <string>
#include <iostream>

using namespace std;
void bubbleSort1(vector<int>& a){
    bool flag = false;
    for (int i = 0; i <a.size()-1; ++i) {
        flag = false;
        for (int j = 0; j <a.size()-1-i ; ++j) {
            if(a[j+1]< a[j]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}

void selectSort(vector<int>& a){
    for (int i = 0; i <a.size()-1 ; ++i) {
        int min = i;
        for (int j = i+1; j <a.size() ; ++j) {
            if(a[j]< a[i]){
                min = j;
            }
        }
        if(i!= min){
            int tmp = a[i];
            a[i] = a[min];
            a[min] = tmp;
        }

    }
}
void insertSort(vector<int>& a){
    for (int i = 1; i <a.size() ; ++i) {
        if(a[i]<a[i-1]){
            int tmp = a[i];
            int j = 0;
            for (j = i-1; j >=0&& a[j]>tmp ; --j) {
                a[j+1] = a[j];
            }
            a[j+1] = tmp;
        }

    }
}

void Shellsort(vector<int>& a){
    int inc =a.size();
    do{
        inc = inc/4 +1;
        for (int i = inc; i <a.size() ; ++i) {
            if(a[i]< a[i-inc]){
                int tmp = a[i];
                int j = 0;
                for (j = i-inc; j >=0 && a[j] > tmp ; j-=inc) {
                    a[j+inc] = a[j];
                }
                a[j+inc] = tmp;
            }
        }
    }while (inc > 1);
}
void adjustHeap(vector<int>& a,int start,int end){
    int tmp = a[start];
    for (int i = start*2+1; i<=end ; i=i*2+1) {
        if(i<end && a[i] < a[i+1]){
            i++;
        }

        if(tmp >a[i]){
            break;
        }
        else{
            a[start] = a[i];
            start = i;
        }
    }
    a[start] = tmp;
}
void heapSort(vector<int>& a){
    int n = a.size();
    for(int i =(n-1)/2;i>=0;i--){
        adjustHeap(a,i,n-1);
    }

    for(int i = n-1;i>0;i--){
        int tmp = a[i];
        a[i] = a[0];
        a[0] = tmp;
        adjustHeap(a,0,i-1);
    }
}

//void mergeArray(vector<int> a,vector<int> b,vector<int>& c){
//    int i ,j ,k;
//    i = j = k = 0;
//    while (i<a.size()&& j<b.size()){
//        if(a[i]<b[j])
//            c[k++] == a[i++];
//        else
//            c[k++] = b[j++];
//    }
//
//    while(i<a.size())
//        c[k++] = a[i++];
//    while (j<b.size())
//        c[k++] = b[j++];
//
//}

vector<int> mergenum(vector<int>& a,int left,int mid,int right,vector<int> b){
   int i = left;
    int j = mid+1;
    int t = 0;
    while (i<=mid && j<=right){
        if(a[i]<=a[j]){
            b[t++] = a[i++];
        }else{
            b[t++] = a[j++];
        }
    }

    while (i<=mid){
        b[t++] = a[i++];
    }
    while (j<=right){
        b[t++] = a[j++];
    }
    t = 0;
    while (left<=right){
        a[left++] = b[t++];
    }
}
void mergesort(vector<int>& a,int left,int right,vector<int>b){
    if(left<right){
        int mid = (left+right)/2;
        mergesort(a,left,mid,b);
        mergesort(a,mid+1,right,b);
        mergenum(a,left,mid,right,b);
    }
}
//int partition(vector<int>&a ,int start,int end){
//    int key;
//    key = a[start];
//    while (start<end){
//        while (start < end && a[end]>= key){
//            end--;
//        }
//        int tmp = a[end];
//        a[end] = a[start];
//        a[start] = tmp;
//
//        while (start<end && a[start]<=key){
//            start++;
//        }
//        tmp = a[end];
//        a[end] = a[start];
//        a[start] = tmp;
//    }
//    return start;
//}
//void quicksort(vector<int>& a,int start,int end){
//    int index;
//
//    if(start<end){
//        index = partition(a,start,end);
//        quicksort(a,start,index-1);
//        quicksort(a,index+1,end);
//    }
//}
//int main(){
//    vector<int> a= {8,7,6,5,4,3,2,1,5,3,2};
//    vector<int> b(a.size(),0);
//    quicksort(a,0,a.size()-1);
//    for (int i = 0; i <a.size() ; ++i) {
//        std::cout << a[i]<< " ";
//    }
//}