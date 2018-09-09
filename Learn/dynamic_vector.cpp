//
// Created by lh on 2018/5/2.
//

#include <iostream>
#include <vector>
#include <memory>


using namespace std;

vector<int>* fun(){
    vector<int>*p = new vector<int>;
    return p;
    delete p;
}

vector<int>* fun2(){
    vector<int>*q = fun();
    int val;
    while(cin >> val){
        (*q).push_back(val);
    }
    return q;
    delete q;
}

void fun3(){
    vector<int>* r = fun2();
    for (int i = 0; i !=(*r).size() ; ++i) {
        cout << (*r)[i] << " ";

    }
    cout << endl;
    delete r;
}

//int main(){
//
//    fun3();
//    return 0;
//}