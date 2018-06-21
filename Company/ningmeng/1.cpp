//
// Created by lh on 2018/4/28.
//

#include <iostream>

struct LinkList{
    LinkList* pNext;
};

LinkList* revertList(LinkList* pList){
    if(!pList)
        return nullptr;
    LinkList*p,*q,*r;
    p = pList,q=NULL;
    while (p){
        r = p->pNext;
        p->pNext = q;
        q = p;
        p = r;
    }
    return q;

}