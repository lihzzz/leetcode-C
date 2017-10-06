//
// Created by lh on 2017/10/6.
//
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        stringstream ss(sentence);
        string str,res="";
        vector<vector<string>> m(26);
        sort(dict.begin(),dict.end(),[](string& a,string &b){
            return a.size()<b.size();
        });
        for(auto a:dict)
            m[a[0] - 'a'].push_back(a);
        while (ss>>str){
            for(auto word:m[str[0]- 'a']){
                if(str.substr(0,word.size()) == word){
                    str = word;
                    break;
                }
            }
            res += str+" ";
        }
        res.pop_back();
        return res;
    }
};