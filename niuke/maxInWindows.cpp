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
        if(num.size() < size || num.size() == 0 || size == 0){
            return res;
        }

        deque<int> q;
        for (int i = 0; i < num.size() ; ++i) {
            int begin = i - size + 1;
            if(q.empty()){
                q.push_back(i);
            }else if(q.front() < begin){
                q.pop_front();
            }
            while(!q.empty() && num[q.back()] <= num[i]){
                q.pop_back();
            }
            q.push_back(i);
            if(begin >= 0){
                res.push_back(num[q.front()]);
            }
        }
        return res;
    }
};