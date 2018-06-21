//
// Created by lh on 2017/12/7.
//
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        vector<vector<int>> res;
//        set<vector<int>> ss;
//        vector<int> tmp;
//        helper(candidates,target,ss,tmp,0);
//        copy(ss.begin(),ss.end(),back_inserter(res));
//        return res;
//    }
//    void helper(vector<int>& candidates,int target,set<vector<int>>& ss,vector<int>& tmp,int sum){
//        if(target == sum){
//            vector<int> tt;
//            copy(tmp.begin(),tmp.end(),back_inserter(tt));
//            sort(tt.begin(),tt.end());
//            ss.insert(tt);
//        } else{
//            for (auto& a:candidates) {
//                sum += a;
//                tmp.push_back(a);
//                if(target>=sum)
//                    helper(candidates,target,ss,tmp,sum);
//                tmp.pop_back();
//                sum -= a;
//            }
//        }
//    }
//};


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> tmp;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,res,tmp);
        return res;
    }
    void helper(vector<int>& candidates,int target,int start,vector<vector<int>>& ss,vector<int>& tmp){
        if(target == 0){
            ss.push_back(tmp);
        } else{
            for (int i = start;i<candidates.size();++i) {
                tmp.push_back(candidates[i]);
                if(target>0)
                    helper(candidates,target-candidates[i],i,ss,tmp);
                tmp.pop_back();

            }
        }
    }
};