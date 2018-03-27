//
// Created by lh on 2018/3/20.
//
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        unordered_map<char,int> m;
        for(auto& a:str){
            if(m.count(a)!=0){
                m[a]++;
            }else{
                m[a] = 1;
            }
        }
        int n = str.length();
        for(int i = 0;i<n;i++){
            if(m[str[i]] == 1){
                return i;
            }
        }
        return 0;
    }
};