//
// Created by 啦啦啦啦 on 2018/6/21.
//
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> res;

        if(num.size() < size || num.size() == 0){
            return res;
        }
        deque<int> q;
        int time = 0;
        for (int i = 0; i <size ; ++i) {
            while (!q.empty() && num[i] >= num[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        for (int i = size; i <num.size() ; ++i) {
            res.push_back(num[q.front()]);
            while (!q.empty() && num[i] >= num[q.back()]){
                q.pop_back();
            }

            if(!q.empty() && q.front() <= i-size){
                q.pop_front();
            }
            q.push_back(i);
        }
        res.push_back(num[q.front()]);
        return res;
    }
};