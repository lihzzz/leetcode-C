//
// Created by lh on 2018/3/11.
//
#include <vector>
using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.empty())
            return 0;
        int left = 0,right = rotateArray.size()-1;
        int mid = left;

        while (rotateArray[left] >= rotateArray[right]){
            if(right - left == 1){
                mid = right;
                break;
            }

            mid = (left + right)/2;
            if(rotateArray[mid] >= rotateArray[right])
                left = mid;
            else if(rotateArray[mid]<= rotateArray[right])
                right = mid;
        }
        return rotateArray[mid];
    }
};