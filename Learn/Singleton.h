//
// Created by lh on 2018/4/4.
//

#ifndef LEETCODE_SINGLETON_H
#define LEETCODE_SINGLETON_H

#include <mutex>
#include <winnt.h>
#include <iostream>

using namespace std;

namespace LAZY{
    class Lock{
    public:
        Lock(mutex& mux):_mux(mux){};
        ~Lock(){};
    protected:
        Lock(const Lock& mx);
        Lock&operator=(const Lock& mx);
    private:
        mutex& _mux;
    };

    class Singleton{
    public:
        static Singleton* GetInstance(){
            lock_guard<mutex> lock(mu);
            if(_ints ==NULL){
                Lock lock(mu);
                if(_ints == NULL){
                    Singleton*tmp = new Singleton;
                    MemoryBarrier();
                    _ints = tmp;
                }
            }
            return _ints;
        }

        static void DelInstance(){
            lock_guard<mutex> lock(mu);
            if(_ints){
                cout << "test if delete"<<endl;
                delete _ints;
                _ints = NULL;
            }
        }

        Singleton(const Singleton&);
        Singleton&operator=(const Singleton&);
        void Print(){
            cout << "Singleton:"<<_a<<endl;
        }

    private:
        Singleton():_a(0){}
        int _a;
        static mutex mu;
        static Singleton* _ints;
    };

    Singleton::_ints = NULL;
    void test(){
        Singleton::GetInstance()->Print();

    }
}

namespace HUNGRY{
    class Singleton{
    public:
        static Singleton& GetInstance(){
            static Singleton inst;
            return inst;
        }
        void Print(){
            cout << "Singleton:"<<_a<<endl;
        }
    protected:
        Singleton():_a(0){}
        Singleton(const Singleton&);
        Singleton&operator=(const Singleton&);
        int _a;
    };

    void test1(){
        Singleton::GetInstance().Print();
    }
}


#endif //LEETCODE_SINGLETON_H
