//
// Created by lihzz on 2018/6/25.
//
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string S) {
        unordered_map<char,int> m;
        vector<int> res;
        if(S.empty())
            return res;
        for (int i = 0; i <S.length() ; ++i) {
            m[S[i]] = i;
        }
        int start = 0,end = 0;
        for(int i = 0;i<S.length();i++){
            end = end<m[S[i]]?m[S[i]]:end;
            if(end == i){
                res.push_back(end-start+1);
                start = end + 1;
            }
        }
        return res;
    }
};