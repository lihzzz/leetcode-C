//
// Created by lh on 2017/12/4.
//
#include <vector>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    bool areSentencesSimilarTwo(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
        if(words1.size()!= words2.size())
            return false;
        map<string,string> m;
        for(auto& a:pairs){
            string parent1 = find(m,a.first),parent2 = find(m,a.second);
            if(parent1 != parent2) m[parent1] = parent2;
        }
        for (int i = 0; i <words1.size() ; ++i) {
            if(words1[i] != words2[i] && find(m,words1[i]) != find(m,words2[i]))
                return false;
        }
        return true;
    }
    string find(map<string,string>&m,string str){
        return !m.count(str)?m[str] = str:(m[str] == str?str:find(m,m[str]));
    }
};