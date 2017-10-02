//
// Created by lh on 2017/10/2.
//
#include <vector>
using std::vector;

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if (board.empty() || board[0].empty()) return 0;
        int res = 0,x = board[0].size(),y = board.size();
        for (int i = 0; i <y ; ++i) {
            for (int j = 0; j <x ; ++j) {
                if(board[i][j] != 'X' || (i>0 && board[i-1][j] == 'X') || (j>0 && board[i][j-1] == 'X'))
                    continue;
                ++res;
            }
        }
        return res;
    }
};
