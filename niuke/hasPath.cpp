//
// Created by lh on 2018/3/20.
//

#include <cstring>

class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        if(matrix == nullptr || rows<1 || cols < 1|| str== nullptr){
            return false;
        }
        bool *vis =  new bool[rows*cols];
        memset(vis,0,rows*cols);
        int pathlength = 0;
        for (int i = 0; i <rows ; ++i) {
            for (int j = 0; j <cols ; ++j) {
                if(haspathcore(matrix,rows,cols,i,j,str,pathlength,vis)){
                    return true;
                }
            }
        }
        delete []vis;
        return false;
    }

    bool haspathcore(char* matrix,int rows,int cols,int row,int col, const char* str,int& pathlength,bool* vis){
        if(str[pathlength] == '\0')
            return true;

        bool path=false;
        if(row>=0&& row<=rows && col>=0 && col<=cols && matrix[row*cols+col] == str[pathlength] && !vis[row*cols+col]) {
            ++pathlength;

            vis[row * cols + col] = true;

            path = haspathcore(matrix, rows, cols, row, col - 1, str, pathlength, vis) ||
                   haspathcore(matrix, rows, cols, row, col + 1, str, pathlength, vis)
                   || haspathcore(matrix, rows, cols, row - 1, col, str, pathlength, vis) ||
                   haspathcore(matrix, rows, cols, row + 1, col, str, pathlength, vis);

            if (!path) {
                --pathlength;
                vis[row * cols + col] = false;
            }
        }
        return path;
    }
};