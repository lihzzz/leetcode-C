//
// Created by lh on 2018/3/10.
//
#include <iostream>
#include "smart.h"

using namespace std;
class SomeClass:public RefBase{
public:
    SomeClass(){std::cout << "SomeClass default constructor !"<<std::endl;}
    void func(){std::cout<<"SomeClass func()" << std::endl;}
    ~SomeClass(){std::cout << "SomeClass deconstructor !"<<std::endl;}
};

class otherClass:public RefBase{
public:
    otherClass(){std::cout << "otherclass default constructor !"<<std::endl;}
    void foo(){std::cout<<"OtherClass func()" << std::endl;}
    ~otherClass(){std::cout << "otherclass deconstructor !"<<std::endl;}
};


void testcase2(void){
    SmartPointer<SomeClass> spclass1 = new SomeClass;
    std::cout<<std::endl;

    spclass1 = spclass1;
    cout<<endl;

    SmartPointer<SomeClass> spclassother = spclass1;
    cout << endl;

    SmartPointer<SomeClass> spclass2 = new SomeClass;
    cout<<endl;
    spclass2 = spclass1;

    cout<<endl;
}
void testcase3(void){
    SomeClass *pSomeClass = new SomeClass();
    SmartPointer<SomeClass> spOuter = pSomeClass;
    cout<< "SomeClass Ref Count(" << pSomeClass->getRefCount()<<") outer 1." << endl;

    {
        SmartPointer<SomeClass> spInner = spOuter;
        cout<<"SomeClass Ref Count(" << pSomeClass->getRefCount()<<")inner." << std::endl;
    }

    cout << "SomeClass Ref Count(" << pSomeClass->getRefCount()<<") outer 2." <<endl;

    cout << "new another SomeClass Class  for spOuter." << endl;
    SmartPointer<SomeClass> spOuter2 = new SomeClass();

    spOuter = spOuter2;
}
void testcase4_1(void){
    cout << "================testcase4-1================="<<endl;
    SmartPointer<SomeClass> spsomeclass = new SomeClass();
    (*spsomeclass).func();
    spsomeclass->func();
    cout << "==========================================="<<endl;
}

void testcase4_2(void){
    cout<<"==================testcase4-2================="<<endl;
    SomeClass *psomeclass = new SomeClass();
    SmartPointer<SomeClass> spsomeclass = psomeclass;
    SmartPointer<otherClass> spotherclass = new otherClass();
    SmartPointer<otherClass> spotherclass2 = spotherclass;

    if(spsomeclass == NULL) cout<<"spsomeclass is NULL pointer"<< std::endl;
    if(spotherclass != NULL) cout << "spotherclass is not NULL pointer"<<endl;
    if(spsomeclass == psomeclass) cout<<"spsomeclass and psomeclass are same pointer"<<endl;
    if(spotherclass == spotherclass2) cout<< "same"<<endl;

}

//int main(){
//    testcase4_2();
//    return 0;
//}