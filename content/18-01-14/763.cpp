//
// Created by lh on 2018/1/14.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        unordered_map<char, set<int>> m;
        for (int i = 0; i < S.size(); ++i) {
            m[S[i]].insert(i);
        }
        int end = 0;
        int pre = 0;
        while (end < S.size()) {
            for (int i = pre; i <= end; i++) {
                set<int>::iterator it = m[S[i]].end();
                int index = *(--it);
                if (index > end) {
                    end = index;
                }
            }
            res.push_back(end - pre + 1);
            pre = end+1;
            end+=1;
        }
        return res;
    }
};