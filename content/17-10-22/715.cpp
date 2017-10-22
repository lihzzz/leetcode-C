//
// Created by lh on 2017/10/22.
//
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class RangeModule {
public:
    RangeModule() {

    }

    void addRange(int left, int right) {
        for (int i = left; i <right ; ++i) {
           m[i] = 1;
        }
    }

    bool queryRange(int left, int right) {
        for (int i = left; i <right ; ++i) {
            if(m.count(i) && m[i] == 1)
                continue;
            return false;
        }
        return true;
    }

    void removeRange(int left, int right) {
        for (int i = left; i <right ; ++i) {
            m[i] = 0;
        }
    }

private:
    unordered_map<int,int>m;
};