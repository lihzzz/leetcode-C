//
// Created by lh on 2017/9/2.
//
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
//class Solution {
//public:
//
//    void wordDFS(int start,string s,unordered_set<string> wordDict,string out,vector<string>& res,vector<bool> dp){
//        if(start == s.size()){
//            out.resize(out.size()-1);
//            res.push_back(out);
//            return;
//        }
//        for (int j = start; j < s.length(); ++j) {
//            string seg = s.substr(start,j-start+1);
//            if(wordDict.find(seg) != wordDict.end() && dp[j+1]){
//                out.append(seg).append(" ");
//                int oldsize = out.size();
//                wordDFS(j+1,s,wordDict,out,res,dp);
//                if(res.size() == oldsize) dp[j+1] = false;
//                out.resize(out.size() - seg.size() - 1);
//            }
//        }
//
//    }
//    vector<string> wordBreak(string s, vector<string>& wordDict) {
//        string tmp = "";
//        vector<string> res;
//        vector<bool> dp(s.length()+1, true);
//        unordered_set<string> wordDictSet(wordDict.begin(),wordDict.end());
//        wordDFS(0,s,wordDictSet,tmp,res,dp);
//        sort(res.rbegin(),res.rend());
//        return res;
//    }
//};


#include <unordered_map>
class Solution {
    unordered_map<string,vector<string>> m;
    vector<string> combine(string word,vector<string> prev){
        for (int i = 0; i <prev.size() ; ++i) {
            prev[i] += " " + word;
        }
        return  prev;
    }
public:
    vector<string> wordBreak(string s, vector<string> &wordDict) {
        unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());
        if (m.count(s)) return m[s];
        vector<string> result;
        if (wordDictSet.count(s)) {
            result.push_back(s);
        }
        for (int i = 1; i < s.size(); ++i) {
            string word = s.substr(i);
            if (wordDictSet.count(word)) {
                string rem = s.substr(0, i);
                vector<string> prev = combine(word, wordBreak(rem, wordDict));
                result.insert(result.end(), prev.begin(), prev.end());
            }
        }
        m[s] = result;
        return result;
    }
};