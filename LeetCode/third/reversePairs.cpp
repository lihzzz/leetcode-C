//
// Created by lihzz on 2018/7/19.
//

//
// Created by lh on 2018/3/20.
//
#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int reversePairs(vector<int> data) {
        if(data.empty() || data.size()<2){
            return 0;
        }
        long long res = 0;
        res =  Inverse(data,0,data.size()-1);
        return res;
    }

    int Inverse(vector<int> data,int start,int end){
        if(start<end)
        {
            int mid = start + ((end-start)>>1);
            int leftcount = Inverse(data,start,mid)%1000000007;
            int rightcount = Inverse(data,mid+1,end)%1000000007;
            return (leftcount+rightcount+merge(data,start,mid,end))%1000000007;
        }else{
            return 0;
        }

    }

    int merge(vector<int> data,int start,int mid,int end){
        int n = data.size();
        int res = 0;
        vector<int> help(end-start+1,0);
        int i = 0;
        int p1 = start,p2 = mid+1;
        while (p1<=mid && p2 <= end){
            if(data[p1]>data[p2]){
                res += end-p2+1;
                if(res >=1000000007){
                    res %=1000000007;

                }
            }
            help[i++] = data[p1]<data[p2]?data[p2++]:data[p1++];
        }

        while(p1<=mid){
            help[i++] = data[p1++];
        }
        while(p2<=end){
            help[i++] = data[p2++];
        }
        int size = help.size();
        for (int j = 0; j < size ; ++j) {
            data[start+j] = help[j];
        }
        return res;
    }
};

