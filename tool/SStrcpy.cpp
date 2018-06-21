//
// Created by lh on 2018/3/9.
//

#include <cassert>

char* strcpy(char* strDest, const char* strSrc){
    assert((strDest!=NULL) && (strSrc!=NULL));
    char* address = strDest;

    while ((*strDest++ = *strSrc++)!='\0');
    return address;
}