//
// Created by lh on 2017/12/10.
//
#include <vector>
#include <climits>

using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res;
        int minchar = INT_MAX;
        for (int i = 0; i <letters.size() ; ++i) {
            int curchar = letters[i]-target;
            if(curchar <= 0)
                curchar += 26;
            if(curchar < minchar){
                minchar = curchar;
                res = letters[i];
            }
        }
        return res;
    }
};