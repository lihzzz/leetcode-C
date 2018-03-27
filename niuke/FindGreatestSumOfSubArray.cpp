//
// Created by lh on 2018/3/18.
//
#include <vector>
#include <climits>

using namespace std;
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.empty()) {
            return 0;
        }
        int res = array[0];
        int maxres = array[0];
        for (int i = 1; i <array.size() ; ++i) {
            int tmp = res +array[i];
            if(tmp > array[i]){
                res = tmp;
            }else{
                res = array[i];
            }
            maxres = maxres>res?maxres:res;
        }
        return maxres;
    }
};