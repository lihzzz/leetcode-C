//
// Created by lll on 2017/10/30.
//
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0,cur = 1,n = chars.size();
        for (int i = 1; i <=n ; ++i,++cur) {
            if(i<n && chars[i] == chars[i-1]) continue;
            chars[j++] = chars[i-1];
            if(cur != 1){
                string str = to_string(cur);
                for (int k = j; k <j+str.length() ; ++k) {
                    chars[k] = str[k-j];
                }
                j+= str.length();
            }
            cur = 0;
        }
        return j;
    }
};