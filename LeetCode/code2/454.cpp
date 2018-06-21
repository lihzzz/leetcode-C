//
// Created by lh on 2017/9/16.
//
#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;

//class Solution {
//public:
//    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
//        unordered_map<int,int> res;
//        int out = 0;
//        for (int i = 0; i <A.size() ; ++i) {
//            for (int j = 0; j <B.size() ; ++j) {
//                res[A[i] + B[j]] ++;
//            }
//        }
//
//        for (int k = 0; k <C.size() ; ++k) {
//            for (int i = 0; i <D.size() ; ++i) {
//                int target = -1*(C[k] + D[i]);
//                 out += res[target];
//            }
//        }
//        return out;
//    }
//};

class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> m,n;
        int out = 0;
        for (int i = 0; i <A.size() ; ++i) {
            for (int j = 0; j <B.size() ; ++j) {
                m[A[i] + B[j]] ++;
                n[C[i] + D[j]] ++;
            }
        }
        for(auto a:m){
            out += a.second * n[-a.first];
        }
        return out;
    }
};