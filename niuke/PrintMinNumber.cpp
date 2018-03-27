//
// Created by lh on 2018/3/20.
//
#include <string>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        set<string> s;
        helper(numbers,0,s);
        return *s.begin();
    }

    void helper(vector<int> number,int start,set<string>& s){
        if(start == number.size()){
            string tmp="";
            for(auto& a :number){
                tmp += to_string(a);
            }
            s.insert(tmp);
        }
        for (int i = start; i <number.size() ; ++i) {
            int num = number[i];
            number[i] = number[start];
            number[start] = num;

            helper(number,start+1,s);

            num = number[i];
            number[i] = number[start];
            number[start] = num;
        }

    }
};