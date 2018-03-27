//
// Created by lh on 2018/3/17.
//
#include <vector>

using namespace std;
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int n = numbers.size();
        if(numbers.empty()){
            return 0;
        }

        int start = 0,end = n-1;
        int res =numbers[0];
        quick(numbers,start,end,n,res);
        return res;
    }

    void quick(vector<int> numbers,int start,int end,int n,int& res){
        int index = 0;
        if(start<end){
            index = partition(numbers,start,end);
            if(index < n/2){
                quick(numbers,index+1,end,n,res);
            }else if(index > n/2){
                quick(numbers,start,index+1,n,res);
            }else{
                res = istrue(numbers[index],numbers);
            }
        }
    }
    int istrue(int number,vector<int> numbers){
        int count = 0;
        for(auto& a: numbers){
            if(a==number){
                count++;
            }
        }
        if(count > (numbers.size()/2)){
            return number;
        }
        return 0;
    }

    int partition(vector<int>& numbers,int start,int end){
        int key = numbers[start];

        while (start < end){
            while (start < end && numbers[end] >= key){
                end--;
            }

            int tmp = numbers[end];
            numbers[end] = numbers[start];
            numbers[start] = tmp;

            while (start<end && numbers[start] <= key){
                start++;
            }

            tmp = numbers[start];
            numbers[start] = numbers[end];
            numbers[end] = tmp;
        }

        return start;
    }
};