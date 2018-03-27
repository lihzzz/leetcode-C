//
// Created by lh on 2018/3/20.
//
#include <vector>
using namespace std;
typedef vector<int>::iterator iter;
class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index == 0){
            return 0;
        }
        vector<int>  uglyNumber(index,0);
        int nextugly = 1;
        uglyNumber[0] = 1;

        iter it2 = uglyNumber.begin();
        iter it3 = uglyNumber.begin();
        iter it5 = uglyNumber.begin();

        while (nextugly < index){
            int min = Min(*it2*2,*it3*3,*it5*5);
            uglyNumber[nextugly] = min;

            while (*it2*2<=uglyNumber[nextugly]){
                ++it2;
            }
            while (*it3*3<=uglyNumber[nextugly]){
                ++it3;
            }
            while (*it5*5<=uglyNumber[nextugly]){
                ++it5;
            }
            ++nextugly;
        }

        int ugly = uglyNumber[nextugly-1];
        return ugly;
    }

    int Min(int a,int b,int c){
        int min = (a<b)?a:b;
        min = (min<c)? min:c;
        return min;
    }
};