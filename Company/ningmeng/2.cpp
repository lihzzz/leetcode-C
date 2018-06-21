//
// Created by lh on 2018/4/28.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct Tree{
    vector<Tree*> children;
};

int getTreeWidth(const Tree* pRoot){
    if(!pRoot)
        return 0;
    if(pRoot->children.empty())
        return 1;
    int maxwidth = 1;
    queue<const Tree*> q;
    q.push(pRoot);

    while (!q.empty()){
        int size = q.size();
        for (int i = 0; i <size ; ++i) {
            const Tree* t = q.front();
            q.pop();
            int childsize = t->children.size();
            for (int j = 0; j <childsize ; ++j) {
                q.push(t->children[j]);
            }
        }
        maxwidth = maxwidth>q.size()?maxwidth:q.size();
    }
    return maxwidth;
}