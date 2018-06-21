//
// Created by lh on 2017/11/26.
//
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        for (int x:asteroids) {
            while (true) {
                if (res.size() && (res.back() > 0) != (x > 0)) {
                    if(res.back() < 0  && x>0){
                        res.push_back(x);
                        break;
                    }
                    if (abs(x) < abs(res.back())) break;
                    if (abs(x) == abs(res.back())) {
                        res.pop_back();
                        break;
                    }
                    res.pop_back();
                }
                else {
                    res.push_back(x);
                    break;
                }
            }
        }
        return res;
    }
};