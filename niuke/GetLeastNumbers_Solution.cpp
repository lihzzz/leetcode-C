//
// Created by lh on 2018/3/17.
//


#include <vector>
#include <set>
using namespace std;
typedef multiset<int,greater<int>> intset;
typedef multiset<int,greater<int> >::iterator setIt;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        intset lessnumber;
        int n = input.size();
        if(n==0 || k<=0 || k>n){
            return vector<int>();
        }
        if(k== n){
            return input;
        }
        for(auto& a:input){
            if(lessnumber.size() < k){
                lessnumber.insert(a);
            }else{
                setIt mulsetit = lessnumber.begin();
                if(a < *mulsetit){
                    lessnumber.erase(mulsetit);
                    lessnumber.insert(a);
                }
            }
        }
        return vector<int>(lessnumber.begin(),lessnumber.end());

    }
};