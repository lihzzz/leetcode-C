//
// Created by lh on 2017/10/5.
//
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using std::unordered_map;
using std::vector;
using std::string;
using std::stringstream;
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;
        if(paths.empty())return res;
        int n = paths.size();
        for (int i = 0; i <n ; ++i) {
            stringstream ss(paths[i]);
            string filename,pre;
            ss >> pre;
            while (ss >>filename){
                int idx = filename.find_last_of('(');
                string dir = pre + "/" + filename.substr(0, idx);
                string content = filename.substr(idx + 1, filename.size() - idx - 2);
                m[content].push_back(dir);
            }
        }
        for(auto a:m){
            if(a.second.size()>1) res.push_back(a.second);
        }
        return res;
    }
};