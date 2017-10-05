//
// Created by lh on 2017/10/5.
//
#include <vector>
using std::vector;
//TLE
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& A) {
//        if(A.size()<3)
//            return 0;
//        int n = A.size();
//        int res = 0;
//        for (int i = 0; i+2 <n ; ++i) {
//            for (int j = 3; ; ++j) {
//                if(i+j>n)
//                    break;
//                vector<int> tmp(A.begin()+i,A.begin()+i+j);
//                int diff = tmp[1]-tmp[0];
//                int k = 2;
//                for (; k <tmp.size() ; ++k) {
//                    if(tmp[k]-tmp[k-1]!=diff)
//                        break;
//                }
//                if(k==tmp.size())
//                    ++res;
//            }
//        }
//        return res;
//    }
//};



//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& A) {
//        if(A.size()<3)
//            return 0;
//        int n = A.size();
//        int res = 0;
//        bool flag = true;
//        for (int i = 0; i+2 <n ; ++i) {
//            flag = true;
//            for (int j = 3;i+j<=n ; ++j) {
//                vector<int> tmp(A.begin()+i,A.begin()+i+j);
//                if((tmp[j-1] - tmp[j-2]) != (tmp[j-2]-tmp[j-3])){
//                    flag= false;
//                    break;
//                }
//                ++res;
//            }
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& A) {
//        if(A.size()<3)
//            return 0;
//        int n = A.size();
//        int res = 0,len = 2;
//        for (int i = 2; i < n; ++i) {
//            if((A[i]-A[i-1]) == (A[i-1]-A[i-2])){
//                ++len;
//            }else{
//                if(len>2) res += (len-1)*(len-2)*0.5;
//                len =2;
//            }
//        }
//        if(len>2) res += (len-1)*(len-2)*0.5;
//        return res;
//    }
//};


class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3)
            return 0;
        int n = A.size();
        int res = 0,cnt = 0;
        for (int i = 2; i <n ; ++i) {
            if((A[i]-A[i-1]) == (A[i-1]-A[i-2])){
                cnt += 1;
                res += cnt;
            } else{
                cnt = 0;
            }
        }
        return res;
    }
};



