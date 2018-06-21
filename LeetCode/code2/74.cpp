//
// Created by lh on 2017/9/13.
//
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }
        int m = matrix.size(),n= matrix[0].size();
        int ml = 0,mr= m-1;
        int nl = 0,nr = n-1;

        while (ml <= mr){
            int mid = (ml + mr) / 2;
            if(matrix[mid][n-1] == target)
                return true;
            else if(matrix[mid][n-1] < target){
                ml = mid + 1;
            }else{
                mr = mid-1;
            }
        }

        int row = ml;
        if(row >= m){
            return false;
        }
        while(nl <= nr){
            int mid = (nl+nr)/2;
            if(matrix[row][mid] == target)
                return true;
            else if(matrix[row][mid] < target){
                nl = mid + 1;
            }else{
                 nr = mid - 1;
            }
        }
        return false;
    }
};