////
//// Created by lh on 2018/3/22.
////
#include <iostream>
#include <type_traits>

using namespace std;

static int num;

template <typename T>
void g(const T& val){
    cout << num++ << ":" << endl;
    std::cout << std::boolalpha;
    cout << "T's type is " << typeid(T).name() << endl;
    cout << "T's type is const? " << is_const<T>::value << endl;
    cout << "Is reference? " << is_reference<T&&>::value << endl;
    cout << "Is left reference? " << is_lvalue_reference<T&&>::value << endl;
    cout << "Is right reference? " << is_rvalue_reference<T&&>::value << endl;
}

int i = 0;
const int ci = i;
void foo(const int & i) { cout << "const int & " << i << endl; }
void foo(int & i) { cout << "int & " << i << endl; }
void foo(int && i) { cout << "int && " << i << endl; }
void foo(const int && i) { cout << "const int && " << i << endl; }

class Test {
    int * arr{nullptr};
public:
    Test():arr(new int[5000]{1,2,3,4}) {
        cout << "default constructor" << endl;
    }
    Test(const Test & t) {
        cout << "copy constructor" << endl;
        if (arr == nullptr) arr = new int[5000];
        memcpy(arr, t.arr, 5000*sizeof(int));
    }
    Test(Test && t): arr(t.arr) {
        cout << "move constructor" << endl;
        t.arr = nullptr;
    }
    ~Test(){
        cout << "destructor" << endl;
        delete [] arr;
    }
};
template <typename T>
void func(T t) {
    cout << "in func" << endl;
}

template <typename T>
void relay(T&& t) {
    cout << "in relay" << endl;
    func(std::forward<T>(t));
}
Test createTest() {
    return Test();
}
//int main() {
//    Test t;
//    relay(t);
//
////    cout << "i's type is " << typeid(i).name() << endl;
////    cout << "ci's type is " << typeid(ci).name() << endl;
////    cout << "i * ci's type is " << typeid(i * ci).name() << endl;
////
////    g(i);
////    g(ci);
////    g(i * ci);
////    g(i = ci);
//
//
//}


