//
// Created by lh on 2017/9/1.
//
#include <vector>
#include <algorithm>
using namespace std;
//class Solution{ //Time Limit Exceeded
//public:
//    int maxArea(vector<int>& height){
//        int size = height.size();
//        int maxarea = 0,area = 0;
//        for (int i = 0; i < size ; ++i) {
//            for (int j = 0; j < size; ++j) {
//                area = min(height[i],height[j]) * abs(i-j);
//                if(area > maxarea) maxarea = area;
//            }
//        }
//        return maxarea;
//    }
//};

class Solution{
public:
    int maxArea(vector<int>& height){
        int size = height.size();
        int maxarea = 0,area = 0;
        int left = 0,right = size-1;
        while (left < right){
            maxarea = max(maxarea,min(height[left],height[right]) * (right -left));
            if(height[left] > height[right]){
                right --;
            }else{
                left ++;
            }
        }
        return maxarea;
    }
};