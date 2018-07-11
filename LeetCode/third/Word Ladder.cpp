//
// Created by lihzz on 2018/7/11.
//
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> alist(wordList.begin(),wordList.end());
        unordered_map<string,int>m;
        queue<string> q;
        m[beginWord] = 1;
        q.push(beginWord);
        while (!q.empty()){
            string str = q.front();
            q.pop();
            for (int i = 0; i < str.size(); ++i) {
                string newword = str;
                for (char ch ='a';ch<='z';++ch) {
                    newword[i] = ch;
                    if(alist.count(newword) && newword == endWord){
                        return m[str]+1;
                    }
                    if(alist.count(newword) && !m.count(newword)){
                        m[newword]= m[str] + 1;
                        q.push(newword);
                    }

                }
            }
        }
    }
};