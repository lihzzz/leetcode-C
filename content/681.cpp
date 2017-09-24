//
// Created by lh on 2017/9/24.
//
#include <string>
#include <vector>
using std::vector;
using std::string;
class Solution {
public:
    string nextClosestTime(string time) {
        string res ="";
        vector<int> m;
        for (int i = 0; i <time.size() ; ++i) {
            if(time[i] == ':')continue;
            m.push_back(int(time[i]));
        }

    }
};