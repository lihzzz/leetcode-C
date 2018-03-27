//
// Created by lh on 2018/3/11.
//
#include <vector>

using namespace std;
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool res = false;
        int y = array.size(),x = array[0].size();
        if(y!=0){
            int row = 0;
            int column = x-1;
            while (row<y && column>=0){
                if(array[row][column] == target){
                    res = true;
                    break;
                }else if(array[row][column]  > target){
                    --column;
                }else{
                    row ++;
                }
            }
        }
        return res;
    }
};