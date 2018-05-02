//
// Created by lh on 2017/12/30.
//

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <typeinfo>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    virtual ~A()
    {
        cout<<"~A()"<<endl;
    }
};

class B:public A
{
public:
    B()
    {
        cout<<"B()"<<endl;
    }
    virtual ~B()
    {
        cout<<"~B()"<<endl;
    }
};
class C:public B
{
public:
    C()
    {
        cout<<"C()"<<endl;
    }
    virtual ~C()
    {
        cout<<"~C()"<<endl;
    }
};
class D:public B,public A
{
public:
    D()
    {
        cout<<"D()"<<endl;
    }
    virtual ~D()
    {
        cout<<"~D()"<<endl;
    }
};
int main(int argc,char** argv)
{
//    A *pa = new C;
//    if (B *pb = dynamic_cast<B*>(pa))
//    {
//        cout<<"True"<<endl;
//    }
//    else
//    {
//        cout<<"False"<<endl;
//    }//因为指针类型的转换失败返回为0可以使用条件中赋值判断
//
//    try
//    {
//        C &cp = dynamic_cast<C&>(*pa);//正确，*pa的类型是C
//        cout << "cp" << endl;
//    }
//    catch (std::bad_cast e)
//    {
//        cout << e.what() << endl;
//    }//引用类型失败返回的是bad_cast

    B *pbb = new B;
    if (C *pc = dynamic_cast<C*>(pbb))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

//    A *paa = new D;
//    if (B *pc = dynamic_cast<B*>(paa))
//    {
//        cout<<"True"<<endl;
//    }
//    else
//    {
//        cout<<"False"<<endl;
//    }

    cin.get();
    return 0;
}