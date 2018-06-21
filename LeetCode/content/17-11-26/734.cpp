//
// Created by lh on 2017/11/26.
//
#include<vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
        int n = words1.size();
        int m = words2.size();
        if(n != m){
            return false;
        }
        for (int i = 0; i <n ; ++i) {
            if(words1[i] == words2[i]){
                continue;
            }
            pair<string,string> cur(words1[i],words2[i]);
            pair<string,string> cur2(words2[i],words1[i]);
            if(find(pairs.begin(),pairs.end(),cur)== pairs.end() && find(pairs.begin(),pairs.end(),cur2) == pairs.end()){
                return false;

            }
        }
        return true;
    }
};