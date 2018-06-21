//
// Created by lh on 2017/9/24.
//
#include <vector>
#include <string>
using std::vector;
using std::string;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int res = 0;
        vector<int>m;
        for (int i = 0; i <ops.size() ; ++i) {
            if(ops[i] =="C"){
                int remove = m.back();
                m.erase(m.end()-1);
                res -= remove;
            } else if(ops[i] == "D"){
                int dou = m.back() * 2;
                res += dou;
                m.push_back(dou);
            } else if(ops[i] == "+"){
                vector<int>::iterator it = m.end()-1;
                int point = *it + *(it-1);
                res += point;
                m.push_back(point);
            } else{
                int number = atoi(ops[i].c_str());
                m.push_back(number);
                res += number;
            }
        }
        return res;
    }
};