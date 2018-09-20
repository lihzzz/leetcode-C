//
// Created by lihzz on 2018/9/20.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

long change(int number,int bit){
    long res = 0;
    string tmp = to_string(number);
    int length = tmp.size();
    int index = 1;
    for (int i = length-1; i >=0 ; --i) {
        if(tmp[i] >= 'A'){
            res+= (tmp[i] - 'A' + 10)*index;
            index*=bit;
        }else{
            res += (tmp[i]-'0')*index;
            index*=bit;
        }
    }
    return res;
}
//int main(){
//    string str;
//    map<int,int> m;
//    vector<string> data;
//    vector<long> res;
//    while(getline(cin,str)){
//        if(str=="END"){
//            break;
//        }
//        data.push_back(str);
//    }
//    for(auto& a:data){
//        int index = a.find("#");
//        int num1 = atoi(a.substr(0,index).c_str());
//        int num2 = atoi(a.substr(index+1,a.length()-index).c_str());
//        long tonum = change(num2,num1);
//        res.push_back(tonum);
//        if(!m.count(tonum)){
//            m[tonum] = 1;
//        }else{
//            m[tonum]++;
//        }
//    }
//    int index = 0;
//    int flag = 0;
//    long tmp = 0;
//    for (auto& a:m) {
//        if(a.second == 1){
//            flag = 1;
//            tmp = a.first;
//            break;
//        }
//    }
//    if(flag){
//        for (index = 0; index <res.size() ; ++index) {
//            if(res[index] == tmp){
//                flag = 1;
//                break;
//            }
//        }
//        cout << data[index];
//    }else{
//        cout << "None";
//    }
//
//
//}