//
// Created by lihzz on 2018/7/12.
//

#include <vector>

using namespace std;
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.empty())
            return;
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if((i == 0 || j == 0 || i == m-1 || j==n-1)&& board[i][j] == 'O')
                    DFS(board,i,j);
            }
        }

        for (int k = 0; k <m ; ++k) {
            for (int i = 0; i <n ; ++i) {
                if(board[k][i] == 'O')
                    board[k][i] = 'X';
                if(board[k][i] == '$')
                    board[k][i] = 'O';
            }
        }
    }

private:
    void DFS(vector<vector<char>>& board,int i,int j){
        if(board[i][j] == 'O'){
            board[i][j] = '$';
            if(i>0 && board[i-1][j] == 'O')
                DFS(board,i-1,j);
            if(i<board.size()-1&& board[i+1][j] == 'O')
                DFS(board,i+1,j);
            if(j>0 && board[i][j-1] == 'O')
                DFS(board,i,j-1);
            if(j<board[0].size()-1 && board[i][j+1] == 'O')
                DFS(board,i,j+1);
        }
    }
};