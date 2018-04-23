//
// Created by lh on 2018/3/25.
//

#include <ctime>
#include "tool.h"


vector<int> generateRandomArray(int size,int value){
    struct timeb timeSeed;
    ftime(&timeSeed);



    vector<int> res;
    random_device rd;
    default_random_engine e(timeSeed.time * 1000 + timeSeed.millitm);

    uniform_int_distribution<int> u(0,value);
    for (int i = 0; i <size ; ++i) {
        res.push_back(u(e));
    }
    return res;
}
void heapInsert(vector<int>& arr,int index){
    while (arr[index]<arr[(index-1)/2]){
        swap(arr,index,(index-1)/2);
        index = (index-1)/2;
    }
}//初始化大根堆
void heapify(vector<int>& arr,int start,int size){
    int left = start*2+1;
    while (left < size){
        int largetst = left+1<size ?( arr[left] > arr[left+1]?left:left+1):left;
        largetst = arr[largetst] > arr[start] ?largetst:start;
        if(largetst == start){
            break;
        }
        swap(arr,start,largetst);
        start = largetst;
        left = start*2+1;
    }
}

void swap(vector<int>& arr,int a,int b){
    if(a==b)
        return;
    arr[a] = arr[a]^arr[b];
    arr[b] = arr[a]^arr[b];
    arr[a] = arr[a]^arr[b];
}
int getsum(vector<int> data){
    int res = 0;
    if(data.empty()){
        return res;
    }
    int n = data.size();
    for (int i = 0; i <n-1 ; ++i) {
        for (int j = i+1; j <n ; ++j) {
            if(data[i]>data[j]){
                res ++;
            }
        }
    }
    return res%1000000007;
}
void quicksort(vector<int>& arr,int l,int r){
    if(arr.empty() || arr.size()<2){
        return;
    }
    if(l<r){
//        default_random_engine e(time(NULL));
//        uniform_int_distribution<int> uin(0,1);
//        swap(arr,l+(int)(uin(e)*(r-l+1)),r);
        vector<int> p = partition(arr,l,r);
        quicksort(arr,l,p[0]-1);
        quicksort(arr,p[1]+1,r);
    }
}
vector<int> partition(vector<int>&arr,int l,int r){
    int less = l-1;
    int more = r;
    while (l<more){
        if(arr[l]<arr[r]){
            swap(arr,++less,l++);
        }else if(arr[l]>arr[r]){
            swap(arr,--more,l);
        }else{
            l++;
        }
    }
    swap(arr,more,r);
    return vector<int>{less+1,more};
}