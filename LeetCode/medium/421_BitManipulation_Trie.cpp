//
// Created by lh on 2017/10/9.
//
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int res = 0, mask = 0;
        for (int i = 31; i >=0 ; --i) {
            mask |= (1<<i);
            set<int> s;
            for(auto num : nums){
                s.insert(num&mask);
            }
            int t = res | (1<<i);
            for(auto num:s){
                if(s.count(num ^ t)){
                    res = t;
                    break;
                }
            }
        }
        return res;
    }
};