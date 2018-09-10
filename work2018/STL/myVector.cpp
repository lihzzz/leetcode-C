//
// Created by lihzz on 2018/8/21.
//

#include <iostream>
#include <assert.h>
#define DOUBLE_SIZE
using namespace std;


template <typename T>
class myVector{
private:
    const int ADD_SIZE = 64;
    T* array;
    unsigned int vsize;
    unsigned int vcapacity;
    T *allocator(unsigned int size);
    void destory(T* array);

public:
    myVector():array(0),vsize(0),vcapacity(0){}
    myVector(const T& t,unsigned int n);
    myVector(const myVector<T>& other);

    myVector<T>&operator = (myVector<T>& other);
    T &operator [](unsigned int pos);

    unsigned int size();
    unsigned int capacity();
    bool empty();
    void clear();
    void push_back(const T& t);
    void insert_after(int pos,const T& t);
    void push_front(const T& t);
    void insert_before(int pos,const T& t);

    void erase(unsigned int pos);
    void print();
    ~myVector(){
        clear();
    }
};

template <typename T>
myVector<T>::myVector(const T& t, unsigned int n):array(0),vsize(0),vcapacity(0) {
    while (n--){
        push_back(t);
    }
}

template <typename T>
myVector<T>::myVector(const myVector<T>& other){
    array = other.array;
    vsize = other.vsize;
    vcapacity = other.vcapacity;
}

template <typename T>
unsigned int myVector<T>::size() {
    return vsize;
}

template <typename T>
void myVector<T>::clear() {
    destory(array);
    array = 0;
    vsize = 0;
    vcapacity = 0;
}

template <typename T>
unsigned int myVector<T>::capacity(){
    return vcapacity;
}
template <typename T>
bool myVector<T>::empty() {
    return (vsize == 0);
}

template <typename T>
void myVector<T>::push_back(const T &t) {
    insert_after(vsize-1,t);
}
template <typename T>
void myVector<T>::push_front(const T &t) {
    insert_before(0,t);
}
template <typename T>
void myVector<T>::insert_after(int pos, const T &t) {
    insert_before(pos+1,t);
}

template <typename T>
void myVector<T>::insert_before(int pos, const T &t) {
    if(vsize == vcapacity){
        T *old_array = this->array;
#ifdef DOUBLE_SIZE
        if(vcapacity == 0){
            vcapacity = 1;
        }
        vcapacity = vcapacity << 1;
#else
        vcapacity += ADD_SIZE;
#endif
        array = allocator(vcapacity);
        for (unsigned int i = 0; i < vsize; ++i) {
            array[i] = old_array[i];
        }
        destory(old_array);
    }
    for (int i = (int)vsize++; i > pos ; --i) {
        array[i] = array[i-1];
    }
    array[pos] = t;
}

template <typename T>
T* myVector<T>::allocator(unsigned int size) {
    return new T[size];
}
template <typename T>
void myVector<T>::destory(T *array) {
    if(array){
        delete[] array;
    }
}

template <typename T>
void myVector<T>::erase(unsigned int pos) {
    if(pos<vsize){
        --vsize;
        for (int i = pos; i <vsize ; ++i) {
            array[i] = array[i+1];
        }
    }
}

template <typename T>
void myVector<T>::print() {
    for (unsigned int i = 0; i < size() ; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Real time size = "<< size() <<endl;
    cout << "The capacity = " << capacity() << endl<<endl;
}

template <typename T>
myVector<T>& myVector<T>::operator=(myVector<T> &other) {
    if(this == &other){
        return *this;
    }
    clear();
    vsize = other.size();
    vcapacity = other.vcapacity;
    array = new T[vcapacity];
    for (unsigned int i = 0; i < vsize; ++i) {
        array[i] = other[i];
    }
    return *this;
}

template <typename T>
T & myVector<T>::operator[](unsigned int pos) {
    assert(pos<vsize);
    return array[pos];
}

//int main() {
//    myVector<int> my_myVector;
//    // 插入元素
//    my_myVector.push_back(1);
//    my_myVector.push_back(2);
//    my_myVector.push_back(3);
//    my_myVector.push_front(0);
//    if(my_myVector.size() == 4)
//        my_myVector.print();
//
//    // 删除元素(i为下标)
//    my_myVector.erase(1);
//    if((!my_myVector.empty()) && my_myVector.capacity() == 64)
//        my_myVector.print();
//
//    // 清空
//    my_myVector.clear();
//    if(my_myVector.empty())
//        cout << "myVector is empty !" << endl << endl;
//
//    // 测试动态扩展
//    for(int i = 0; i < 100; i++)
//        my_myVector.push_back(i);
//    my_myVector.print();
//
//    // 测试拷贝构造函数(浅拷贝)
//    myVector<int> my_myVector_2(my_myVector);
//    /*
//     * my_myVector.clear();
//     * 调用此句会出错，my_myVector指向的内存被释放
//     * my_myVector_2中array指针为野指针
//     */
//    my_myVector_2.print();
//
//    // 测试=重载运算符
//    myVector<int> my_myVector_1(0, 10);
//    my_myVector_1 = my_myVector;
//    my_myVector_1.print();
//
//    // 测试[]重载运算符
//    int n;
//    cin >> n;
//    cout << "The " << n << "th element = " << my_myVector[n] << endl << endl;
//
//    return 0;
//}
