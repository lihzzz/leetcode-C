//
// Created by lh on 2018/3/20.
//
#include <vector>
#include <cstring>

using namespace std;
class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        if(threshold < 0 || rows<0 || cols<0)
            return 0;
        bool* vis = new bool[rows* cols];
        memset(vis,0,rows*cols);

        int count = moving(threshold,rows,cols,0,0,vis);
        delete[] vis;
        return count;
    }

    int moving(int threashold,int rows,int cols,int row,int col,bool* vis){
        int count = 0;
        bool check = false;
        if(row>=0 && row<rows && col>=0  && col <cols && getDightSum(row)+getDightSum(col) <=threashold && !vis[row*cols+col]){
            vis[row*cols+col] =  true;

            count = 1+moving(threashold,rows,cols,row,col-1,vis) + moving(threashold,rows,cols,row,col+1,vis)+
                                                                   moving(threashold,rows,cols,row-1,col,vis)+
                                                                   moving(threashold,rows,cols,row+1,col,vis);
        }
        return count;
    }
    int getDightSum(int number){
        int sum = 0;
        while (number>0){
            sum += number%10;
            number/=10;
        }
        return sum;
    }
};