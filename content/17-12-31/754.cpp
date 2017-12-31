//
// Created by lh on 2017/12/31.
//
#include <queue>
using namespace std;
class Solution {
public:
    int reachNumber(int target) {
        queue<int> q;
        q.push(0);
        int res = 1;
        while (!q.empty()){
            int n = q.size();
            for (int i = 0; i <n ; ++i) {
                int number = q.front();
                q.pop();

                if(number+res == target || number - res == target)
                    return res;
                q.push(number+res);
                q.push(number-res);

            }
            res++;
        }
        return res;
    }

};