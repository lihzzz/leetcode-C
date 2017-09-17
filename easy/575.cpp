//
// Created by lh on 2017/9/17.
//
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> kinds;
        for(int kind:candies){
            kinds.insert(kind);
        }
        return min(kinds.size(),candies.size()/2);

    }
};