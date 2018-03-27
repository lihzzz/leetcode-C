//
// Created by lh on 2018/3/10.
//

#include <iostream>
#include "RTTI.h"

using namespace rttilib;
using namespace std;

class A:public rttiport<A>{};
class B:public rttiport<B>{};
class C:public rttiport<C>{};
class D:public rttiport<D>{};
class E:public rttiport<E>{};

class AB:public virtual A,public virtual B,public rttiport<AB>{};
class CD:public virtual C,public virtual D,public rttiport<CD>{};

class AB_CD:public virtual AB,public virtual CD,public rttiport<AB_CD>{};

class AB_CD_E:public virtual AB,public virtual CD,public virtual E,public rttiport<AB_CD_E>{};


void test_useage(){
    std::cout.setf(std::ios::boolalpha);
    AB* a = new AB();
    B* b = new B();
//    AB_CD_E* obj1 = new AB_CD_E();
//
//    cout << "Is object of A type?" << obj1->isKindOf(rttiport<A>::type())<<endl;
}

//int main(){
//    test_useage();
//    return 0;
//}