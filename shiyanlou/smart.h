//
// Created by lh on 2018/3/10.
//

#ifndef LEETCODE_SMART_H
#define LEETCODE_SMART_H

#include <iostream>

#define  COMPARE(_op_) bool operator _op_(const SmartPointer& o) const {return mPointer _op_ o.mPointer;}\
bool operator _op_(const T* o) const{ return mPointer _op_ o;}
class RefBase{
public:
    RefBase():mCount(0){}
    void incRefCount(){
        mCount++;
    }
    int decRefCount(){
        return --mCount;
    }
    int getRefCount(){
        return mCount;
    }


    virtual ~RefBase(){};
private:
    int mCount;
};


template <typename T>
class SmartPointer{
public:
    SmartPointer():mPointer(NULL){
        std::cout<<"Create unknown smart pointer." << std::endl;
    }
    SmartPointer(T *p):mPointer(p){
        std::cout<<"11";
        std::cout <<"create smart pointer at "<<static_cast<const void*>(p)<<std::endl;
        if(mPointer) mPointer->incRefCount();
    }

    SmartPointer(const SmartPointer &other):mPointer(other.mPointer){
        std::cout<<"Copy smart pointer at"<< static_cast<const void*>(other.mPointer)<<std::endl;
        if(mPointer) mPointer->incRefCount();    }
    SmartPointer &operator = (const SmartPointer &other){
//        if(this == &other){
//            return *this;
//        }
//        if(mPointer)delete mPointer;
//        mPointer = other.mPointer;
        T *temp(other.mPointer);
        if(temp) temp->incRefCount();

        if(mPointer&& mPointer->decRefCount()==0)delete mPointer;

        mPointer = temp;

        std::cout<<"Assign Smart Pointer at" << static_cast<const void*>(other.mPointer)<<std::endl;
        return *this;
    };
    T&operator*() const { return *mPointer;};
    T*operator->()const { return mPointer;};

    COMPARE(==);
    COMPARE(!=);

    ~SmartPointer(){
        std::cout<<" release smart pointer at"<< static_cast<const void*>(mPointer)<< std::endl;
        if(mPointer && mPointer->decRefCount() == 0)delete mPointer;
    }

private:
    T  *mPointer;
};

#endif //LEETCODE_SMART_H

