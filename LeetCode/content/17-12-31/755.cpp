//
// Created by lh on 2017/12/31.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> pourWater(vector<int>& heights, int V, int K) {
        int size = heights.size();
        for (int i = 0; i <V ; ++i) {

            int minnum = K;
            bool left = false;
            for (int j = K-1; j >=0 ; --j) {
               if(heights[j]< heights[minnum]){
                   minnum = j;
                   left = true;
               }else if(heights[j] > heights[minnum]){
                   break;
               }

            }
            if(!left){
                for (int j = K+1; j <size ; ++j) {
                    if(heights[j] < heights[minnum]){
                        minnum = j;
                    }else if(heights[j]> heights[minnum]){
                        break;
                    }
                }
            }
            heights[minnum] ++;
        }
        return heights;
    }
};