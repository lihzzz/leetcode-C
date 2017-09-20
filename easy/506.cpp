//
// Created by lh on 2017/9/20.
//
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <unordered_map>
using std::string;
using std::sort;
using std::unordered_map;
using std::greater;
using std::to_string;
using std::vector;
//class Solution {
//public:
//    vector<string> findRelativeRanks(vector<int>& nums) {
//        vector<string>res(nums.size(),"");
//        unordered_map<int,int>m;
//        vector<int> oo = {nums.begin(),nums.end()};
//        vector<string>goal={"Gold Medal", "Silver Medal", "Bronze Medal"};
//        sort(nums.begin(),nums.end());
//        for (int j = 0; j <nums.size() ; ++j) {
//            m[nums[j]] = nums.size()-j;
//        }
//        for(int i=0;i<oo.size();i++){
//            int index = m[oo[i]]-1;
//            string _in = to_string(index + 1);
//            if(index <3){
//                _in = goal[index ];
//            }
//            res[i] = _in;
//
//        }
//        return res;
//    }
//};
#include <map>
using std::map;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size(), "");
        map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]] = i;
        }
        int cnt = 1;
        for (auto it = m.rbegin(); it != m.rend(); it++) {
            if (cnt == 1) res[it->second] = "Gold Medal";
            else if (cnt == 2) res[it->second] = "Silver Medal";
            else if (cnt == 3) res[it->second] = "Bronze Medal";
            else
                res[it->second] = to_string(cnt);
            ++cnt;
        }
        return res;
    }
};