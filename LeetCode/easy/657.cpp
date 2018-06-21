//
// Created by lh on 2017/9/16.
//
#include <string>
using std::string;
class Solution {
public:
    bool judgeCircle(string moves) {
        int Hor = 0,Ver = 0;
        for (int i = 0; i <moves.length() ; ++i) {
            char op = moves[i];
            if(op == 'U')
                Ver ++;
            else if(op == 'D')
                Ver --;
            else if(op == 'L')
                Hor --;
            else
                Hor ++;
        }
        if(Hor == 0 && Ver ==0)
            return true;
        else
            return false;
    }
};