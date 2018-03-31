////
//// Created by lh on 2018/3/22.
////
#include <iostream>
#include <vector>
#include <set>
#include <string>
using  namespace std;


void binary(unsigned int value){
    unsigned  int quotient;
    quotient = value / 10;
    if(quotient!=0){
        binary(quotient);
    }
    putchar(value%10+'0');
}
//int main(){
//    int a = 123;
//    binary(123);
//    return 0;
//}

