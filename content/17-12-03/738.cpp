//
// Created by lh on 17-12-3.
//
#include <string>
using namespace std;
class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string str = to_string(N);
        int index = str.size();
        for (int i = str.size()-1; i >0 ; --i) {
            if(str[i] < str[i-1]){
                index = i;
                str[i-1] = str[i-1]-1;
            }
        }
        for (int j = index; j <str.size() ; ++j) {
            str[j] = '9';
        }

        return stoi(str);

    }
};