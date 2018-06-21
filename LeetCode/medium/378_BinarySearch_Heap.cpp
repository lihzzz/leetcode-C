//
// Created by lh on 2017/10/13.
//
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
//class Solution {
//public:
//    int kthSmallest(vector<vector<int>>& matrix, int k) {
//        priority_queue<int> p;
//        for (int i = 0; i <matrix.size() ; ++i) {
//            for (int j = 0; j <matrix[0].size() ; ++j) {
//                p.emplace(matrix[i][j]);
//                if(p.size()>k)
//                    p.pop();
//            }
//        }
//        return p.top();
//    }
//};


//class Solution {
//public:
//    int kthSmallest(vector<vector<int>>& matrix, int k) {
//        int left = matrix[0][0],right = matrix.back().back();
//        while (left < right){
//            int mid  = left + (right-left)/2;
//            int res = 0;
//            for (int i = 0; i <matrix.size() ; ++i) {
//                res += upper_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
//            }
//            if(res < k) left = mid+1;
//            else right = mid;
//        }
//        return left;
//    }
//};




class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int left = matrix[0][0],right = matrix.back().back();
        while (left < right){
            int mid = left + (right-left)/2;
            if(searchEqu(matrix,mid) < k) left = mid+1;
            else right = mid;
        }
        return left;

    }
    int searchEqu(vector<vector<int>> matrix,int mid){
        int n = matrix.size(),i = n-1,j=0,res = 0;
        while(i>=0 && j<n){
            if(matrix[i][j] <= mid){
                res += i+1;
                j++;
            }else{
                i--;
            }
        }
        return res;
    }
};
