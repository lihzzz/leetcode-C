//
// Created by lh on 2018/9/6.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;
//int main()
//{
//    int n, k, t;
//    cin >> n >> k >> t;
//    vector<int> vec;
//    for(int i=0; i<n; ++i)
//    {
//        int a;
//        cin >> a;
//        vec.push_back(a);
//    }
//    int res = 0;
//    map<int,int> count;
//    bool flag = false;
//    for(int i=0; i<k; ++i)
//    {
//        if(!count.count(vec[i])){
//            count.insert(make_pair(vec[i], 1));
//        }else{
//            count[vec[i]]+=1;
//            if(count[vec[i]] >= t){
//                flag = true;
//            }
//        }
//    }
//    if(flag)
//        res++;
//    for(int i=k;i<n; ++i)
//    {
//        if(!count.count(vec[i])){
//            count.insert(make_pair(vec[i], 1));
//        }else{
//            count[vec[i]]+=1;
//        }
//        auto iter2 = count.find(vec[i-k]);
//        --(iter2->second);
//        if(iter2->second == 0)
//            count.erase(iter2);
//        flag = false;
//        auto it = count.begin();
//        while (it!=count.end()){
//            if(it->second >= t)
//                flag = true;
//            ++it;
//        }
//        if(flag)
//            res++;
//    }
//    cout << res << endl;
//}