//
// Created by lh on 2018/4/4.
//

#ifndef LEETCODE_SMARTPTR_H
#define LEETCODE_SMARTPTR_H


#include <iostream>
using namespace std;

template <class T>
class SmartPrt{
    SmartPrt(T* p){
        try {
            use_count = new int(1);
        }catch (...){
            delete ptr;
            ptr = nullptr;
            use_count = nullptr;
            cout << "Allocate memory for use_count fails." << endl;
            exit(1);
        }
        cout << "Constructor is called!" << endl;
    };
    ~SmartPrt(){
        if(--(*use_count) == 0){
            delete ptr;
            delete use_count;
            ptr = nullptr;
            use_count = nullptr;
            cout << "Destructor is called!" << endl;
        }
    };

    SmartPrt(const SmartPrt<T> &orig){
        ptr = orig.ptr;
        ++(*use_count);
        cout << "Copy constructor is called!" << endl;
    };//浅拷贝

    SmartPrt<T>&operator=(const SmartPrt<T> &rhs){
        ++(*rhs.use_count);
        if(--(*use_count)==0){
            delete ptr;
            delete use_count;
            cout << "Left side object is deleted!" << endl;
        }
        ptr = rhs.ptr;
        use_count = rhs.use_count;
        cout << "Assignment operator overloaded is called!" << endl;
        return *this;
    };//浅拷贝

private:
    T* ptr;
    int *use_count;
};


#endif //LEETCODE_SMARTPTR_H
