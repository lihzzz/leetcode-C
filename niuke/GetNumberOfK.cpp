//
// Created by lh on 2018/3/20.
//
#include <vector>
using  namespace std;
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int res = 0;
        if(data.empty()){
            return 0;
        }
        int first = getfirstK(data,k,0,data.size()-1);
        int end = getendK(data,k,0,data.size()-1);
        if(first > -1 && end >-1){
            res = end-first+1;
        }
        return res;
    }

    int getfirstK(vector<int> data,int k,int start,int end){
        if(start>end){
            return -1;
        }
        int mid = (end+start)/2;
        int middata = data[mid];
        if(middata == k){
            if((mid >0  && data[mid-1]!= k) || mid == 0){
                return mid;
            } else{
                end = mid-1;
            }
        }else if(middata<k)
            start = mid+1;
        else
            end = mid-1;
        return getfirstK(data,k,start,end);
    }

    int getendK(vector<int> data,int k,int start,int end){
        if(start>end){
            return -1;
        }
        int mid = (end+start)/2;
        int middata = data[mid];
        if(middata == k){
            if((mid < data.size()-1 && data[mid+1]!= k) || mid == data.size()-1){
                return mid;
            } else{
                start = mid+1;
            }
        }else if(middata<k)
            start = mid+1;
        else
            end = mid-1;
        return getendK(data,k,start,end);
    }
};