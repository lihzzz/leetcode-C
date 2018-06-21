//
// Created by lh on 2018/1/7.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> res;
        for(auto &a: A){
            int index =find(B.begin(),B.end(),a)-B.begin();
            res.push_back(index);
        }
        return res;
    }
};