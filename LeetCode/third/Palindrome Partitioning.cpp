//
// Created by lihzz on 2018/7/12.
//
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    typedef vector <vector<string>> vec;
    vector<vector<string>> partition(string s) {
        vec res;
        if(s.empty())
            return res;
        vector<string> tmp;
        helper(res,s,0,tmp);
        return res;

    }

private:
    void helper(vec& res,string s,int start,vector<string>& tmp){
        if(start == s.length()){
            res.push_back(tmp);
            return;
        }
        for (int i = start; i < s.length(); ++i) {
            if(isPalindrome(s,start,i)){
                tmp.push_back(s.substr(start,i-start+1));
                helper(res,s,i+1,tmp);
                tmp.pop_back();
            }
        }
    }

    bool isPalindrome(string s,int start,int end){
        while (start < end){
            if(s[start++] !=  s[end--])
                return false;
        }
        return true;
    }
};