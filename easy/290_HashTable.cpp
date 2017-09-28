//
// Created by lh on 2017/9/28.
//

#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <set>;
using std::set;
using std::vector;
using std::unordered_map;
using std::string;
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int index =str.find(" ");
        vector<string> word;
        string ss = str;
        string pat="";
        while (index != string::npos){
            word.push_back(ss.substr(0,index));
            ss = ss.substr(index + 1);
            index = ss.find(" ");
        }
        word.push_back(ss);
        if(word.size() != pattern.size())
            return false;
        for (int i = 0; i <word.size() ; ++i) {
            if(m.count(pattern[i])){
                pat += m[pattern[i]] +" ";
            } else if(n.count(word[i])){
                return false;
            } else{
                m[pattern[i]] = word[i];
                n.insert(word[i]);
                pat += m[pattern[i]] + " ";
            }
        }

        return pat.substr(0,pat.size()-1) == str;
    }

private:
    unordered_map<char,string>m;
    set<string> n;
};
