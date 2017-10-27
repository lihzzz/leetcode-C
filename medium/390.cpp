//
// Created by lh on 2017/10/27.
//
#include <string>
using namespace std;
class Solution {
public:
    int lastRemaining(int n) {
        if(n == 1)
            return 1;
        string ss="";
        for (int i = 1; i <=n ; ++i) {
            ss += to_string(i);
        }
        int dest = 0;
        int index = 0;
        while (ss.size() != 1){
            if(dest == 0){
                index = 0;
                while (index <= ss.size()){
                    ss.erase(index,1);
                    index += 2;
                }
                dest = 1;
            }
            else{
                index = ss.size()-1;
                while (index >= 0){
                    ss.erase(index,1);
                    index -= 2;
                }
                dest = 0;
            }
        }
        return stoi(ss);
    }
};