//
// Created by lh on 2018/3/10.
//

#include <iostream>

struct V{
    virtual void f(){};
};
struct A:virtual V{};

struct B:virtual V{
    B(V* v,A*a){
        dynamic_cast<B*>(v);
        dynamic_cast<B*>(a);
    }
};