//
// Created by lh on 2017/9/28.
//
#include <set>
#include <numeric>
using std::accumulate;
using std::set;
//class Solution {
//public:
//    bool checkPerfectNumber(int num) {
//        if(!num || num == 1)
//            return false;
//        set<int> m ;
//        int sum = 0;
//        for (int i = 1; i*i <num; ++i) {
//            if(m.count(i))
//                break;
//            if(num % i != 0)
//                continue;
//            int a = num / i;
//            if(a != num){
//                m.insert(a);
//            }
//            m.insert(i);
//        }
//        for(auto a:m)
//            sum += a;
//        return num == sum;
//    }
//};

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(!num)
            return false;
        int sum = 1;
        for (int i = 2; i*i <num ; ++i) {
            if(num % i == 0) sum += (i + num/i);
            if(i*i == num) sum -= i;
            if(sum > num)break;
        }
        return sum == num;
    }
};