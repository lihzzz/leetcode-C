//
// Created by lh on 2018/3/9.
//
#include <iostream>
#include <cstring>

class MyString{
public:
    MyString(const char*str = NULL);
    MyString(const MyString &other );
    ~MyString(void);
    MyString &operator = (const MyString& other);

private:
    char *m_data;
};


MyString::MyString(const char *str):m_data(NULL) {
    char* p = NULL;
    if(str == NULL){
        p = new char[1];
        if( p  == NULL){
            std::cout<< "分配空间失败"<<std::endl;
            exit(1);
        }else{
            *p = '\n';
            m_data = p;
            p = NULL;
        }
    }else{
        size_t len = strlen(str);
        p = new char[len+1];
        if(p == NULL){
            std::cout<< "分配空间失败"<<std::endl;
            exit(1);
        }else{
            strcpy(p,str);
            m_data = p;
            p = NULL;
        }
    }
}

MyString::MyString(const MyString &other) {
    char* p = NULL;
    size_t  len =strlen(other.m_data);
    p = new char[len];
    if(p == NULL){
        std::cout<< "分配空间失败"<<std::endl;
        exit(1);
    }else{
        strcpy(p,other.m_data);
        m_data = p;
        p =NULL;
    }

}
MyString::~MyString() {
    if(m_data!=NULL){
        delete[] m_data;
        m_data = NULL;
    }
}
MyString & MyString::operator=(const MyString &other) {
    if(this == &other){
        return *this;
    }

    char* p = NULL;
    size_t len =strlen(other.m_data);
    p = new char(len);
    if(p==NULL){
        std::cout<< "分配空间失败"<<std::endl;
        exit(1);
    }else{
        strcpy(p,other.m_data);
        delete[] m_data;
        this->m_data = p;
        p = NULL;
    }
    return *this;

}