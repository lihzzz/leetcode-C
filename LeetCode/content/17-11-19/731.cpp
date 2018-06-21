//
// Created by lh on 2017/11/19.
//
#include <unordered_map>
using namespace std;
class MyCalendarTwo {
public:
    MyCalendarTwo() {

    }

    bool book(int start, int end) {
        int flag = 0;
        for(auto a:m){
            if(max(start,a.first) < min(end,a.second)) {
                int b = a.first;
                n[a.first]++;
                if(n[a.first]-1 >= 2){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1){
            return false;
        }
        m.insert(make_pair(start,end));
        n.insert(make_pair(start,1));
        return true;
    }

private:
    unordered_map<int,int> m;
    unordered_map<int,int> n;
};