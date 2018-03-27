//
// Created by lh on 2018/3/13.
//
#include <vector>
using namespace std;
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.empty()){
            return;
        }
        vector<int> res;
        vector<int>::iterator start = array.begin(),end = array.end()-1;
        while (start!= array.end()){
            if((*start) % 2 == 0){
                res.push_back(*start);
                start = array.erase(start);
            }else{
                start++;
            }
        }
        start = res.begin();
        while (start!=res.end()){
            array.push_back(*start);
            start++;
        }
    }
};