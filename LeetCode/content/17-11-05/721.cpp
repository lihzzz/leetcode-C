//
// Created by lh on 2017/11/5.
//
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<vector<string>> res;
        for (int i = 0; i <accounts.size() ; ++i) {
            string name = accounts[i][0];
            unordered_map<string,int>m;
            vector<string> tmp;
            tmp.push_back(name);
            vector<string>s1(accounts[i].begin()+1,accounts[i].end());
            for (auto a:s1) {
                m[a]++;
            }
            for (int j = i+1; j <accounts.size();) {
                if(accounts[j][0] == name ){
                    vector<string>s2(accounts[j].begin()+1,accounts[j].end());
                    if(Getstring(s1,s2)){
                       for(auto a:s2)
                           m[a]++;
                       accounts.erase(accounts.begin()+j);
                    }else{
                        j++;
                    }
                }
            }
            for(auto a:m)
                tmp.push_back(a.first);
            sort(tmp.begin(),tmp.end());
            res.push_back(tmp);
        }
        return res;
    }
    bool Getstring(vector<string> s1,vector<string> s2){
        for (int i = 0; i <s1.size() ; ++i) {
            for (int j = 0; j <s2.size() ; ++j) {
                if(s1[i] == s2[j])
                    return true;
            }
        }
        return false;
    }
};