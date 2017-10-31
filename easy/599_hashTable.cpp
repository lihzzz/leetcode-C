//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>

using std::string;
using std::unordered_map;
using std::vector;
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m,n;
        vector<string> res;
        int _min = INT_MAX;
        for (int i = 0; i <list1.size() ; ++i) {
            m[list1[i]] = i;
        }
        for (int j = 0; j <list2.size() ; ++j) {
            if(m.count(list2[j])){
                int sum = j + m[list2[j]];
                if(sum == _min)
                    res.push_back(list2[j]);
                else if(sum < _min){
                    _min = sum;
                    res = {list2[j]};
                }}
        }
        return res;
    }
};