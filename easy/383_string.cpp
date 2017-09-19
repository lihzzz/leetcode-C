//
// Created by lh on 2017/9/19.
//
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for (int i = 0; i <magazine.size() ; ++i) {
            m[magazine[i]] ++;
        }
        for (int j = 0; j <ransomNote.size() ; ++j) {
            if(--m[ransomNote[j]] < 0)
                return false;
        }
        return true;
    }
};