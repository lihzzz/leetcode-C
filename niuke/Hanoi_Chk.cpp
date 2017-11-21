//
// Created by lh on 2017/11/21.
//
#include <vector>
using namespace std;
class Hanoi {
public:
    int chkStep(vector<int> arr, int n) {
        // write code here
        if(arr.size() == 0){
            return -1;
        }
        return helper(arr,arr.size()-1,1,2,3);
    }
    int helper(vector<int> arr,int i,int from,int mid,int to){
        if(i==-1){
            return 0;
        }
        if(arr[i]!=from && arr[i] != to){
            return -1;
        }
        if(arr[i] == from){
            return helper(arr,i-1,from,to,mid);
        }else{
            int rest = helper(arr,i-1,mid,from,to);
            if(rest == -1){
                return -1;
            }
            return (1<<i) + rest;
        }
    }
};