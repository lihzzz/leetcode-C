//
// Created by lh on 2018/3/24.
//
#include <vector>
using  namespace std;
class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int n = A.size();
        vector<int> res(n,0);
        if(n==0){
            return res;
        }
        vector<int> pre(n,1),end(n,1);
        pre[0] = 1;
        for (int j = 1; j <n ; ++j) {
            pre[j] = pre[j-1]*A[j-1];
        }
        for (int k = n-2; k >=0 ; --k) {
            end[k] = end[k+1] * A[k+1];
        }
        for (int i = 0; i <n ; ++i) {
            res.push_back(pre[i]*end[i]);
        }
        return res;
    }
};