//
// Created by lll on 2017/10/26.
//
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end(),[](string a,string b){
            if(a.size() == b.size())return a<b;
            return a.size()>b.size();
        });
        for(auto a:d){
            int i = 0;
            for(char c:s){
                if(i<a.size() && c == a[i])i++;
            }
            if(i == a.size())return a;
        }
        return "";
    }
};