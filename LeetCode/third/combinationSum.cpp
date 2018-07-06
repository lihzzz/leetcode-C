//
// Created by lihzz on 2018/7/6.
//
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > result;
        vector<int> num;
        int curSum = 0;
        helper(result,target,candidates,0,num);
        return result;
    }
    void helper(vector<vector<int>>& result,int target,vector<int>& candidates,int start,vector<int> num){
        if(target == 0){
            result.push_back(num);
        }else if( target<0){
            return;
        }else{
            for (int i = start; i <candidates.size() ; ++i) {
                num.push_back(candidates[i]);
                helper(result,target-candidates[i],candidates,i,num);
                num.pop_back();
            }
        }

    }
};