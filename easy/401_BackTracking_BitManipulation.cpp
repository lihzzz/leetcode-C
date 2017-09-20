//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <bitset>
#include <string>
using std::string;
using std::vector;
using std::to_string;
using std::bitset;
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for (int i = 0; i <12 ; ++i) {
            for (int j = 0; j <60 ; ++j) {
                if(bitset<10>((i<<6)+j).count() == num){
                    res.push_back(to_string(i) + (j<10?":0":":") + to_string(j));
                }
            }
        }
        return res;
    }
};
