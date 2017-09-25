//
// Created by lh on 2017/9/25.
//
#include <vector>
using std::vector;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty())
            return {};
        for (int i = digits.size()-1; i >=0 ; --i) {
            if(digits[i] == 9){
                digits[i] = 0;
            } else{
                digits[i]++;
                break;
            }
        }
        if(digits[0] == 0){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};