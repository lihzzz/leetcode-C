//
// Created by lh on 2017/9/24.
//
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::stoi;
using std::to_string;
class Solution {
public:
    string nextClosestTime(string time) {
        string res = "0000";
        int index = time.find(':');
        int cur = stoi(time.substr(0,index)) * 60 + stoi(time.substr(index+1));
        for (int i = 1, d = 0; i <=1440 && d<4 ; ++i) {
            int m = (cur + i) % 1440;
            for (d = 0; d <4 ; ++d) {
                res[d] = '0' + m / mins[d];
                m %= mins[d];
                if(time.find(res[d]) == string::npos) break;
            }
        }
        return res.substr(0,2) + ":" + res.substr(2);
    }

private:
    int mins[4] = {600,60,10,1};
};