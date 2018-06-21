//
// Created by lh on 2017/11/27.
//
#include <vector>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    int triangleNumber(vector<int>& nums) {
//        int n = nums.size();
//        if(n<3){
//            return 0;
//        }
//        int res = 0;
//        vector<int> arr;
//        helper(nums,arr,0,3,res);
//        return res;
//    }
//    void helper(vector<int>& nums,vector<int>& arr,int start,int n,int& res){
//        if(arr.size() == n){
//            if(arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[1]+arr[2] > arr[0]){
//                res++;
//            }
//            return;
//        }
//        for (int i = start; i <nums.size() ; ++i) {
//            arr.push_back(nums[i]);
//            helper(nums,arr,i+1,n,res);
//            arr.pop_back();
//        }
//    }
//};


//class Solution {
//public:
//    int triangleNumber(vector<int> &nums) {
//        int n = nums.size();
//        int res = 0;
//        if(n<3)
//            return 0;
//        sort(nums.begin(),nums.end());
//        for (int i = 0; i <n ; ++i) {
//            for (int j = i+1; j <n ; ++j) {
//                int sum = nums[i] + nums[j];
//                int left = j+1,right = n;
//                while (left<right){
//                    int mid = left+(right-left)/2;
//                    if(nums[mid] < sum) left = mid+1;
//                    else right = mid;
//                }
//                res += right-1-j;
//            }
//        }
//        return res;
//    }
//};
class Solution{
public:
    int triangleNumber(vector<int> & nums){
        int n = nums.size(),res = 0;
        sort(nums.begin(),nums.end());
        for (int i = n-1; i >1 ; --i) {
            int left = 0,right = i-1;
            while (left<right){
                if(nums[left] + nums[right] > nums[i]){
                    res += right-left;
                    right--;
                }else{
                    left++;
                }
            }
        }
        return res;
    }
};