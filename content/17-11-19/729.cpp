//
// Created by lh on 2017/11/19.
//
#include <map>
using namespace std;
class MyCalendar {
public:
    MyCalendar() {
    }

    bool book(int start, int end) {
        for(auto a:m){
            if(max(start,a.first) < min(end,a.second)) {
                return false;
            }
        }
        m.insert(make_pair(start,end));
        return true;
    }

private:
    map<int,int> m;
};