//
// Created by lh on 2017/10/2.
//

#ifndef LEETCODE_DATASTRUCT_H
#define LEETCODE_DATASTRUCT_H

#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};


struct TrieNode{
    TrieNode* child[26];
    bool isWord;
    TrieNode():isWord(false){
        for(auto &a:child)
            a = NULL;
    }
};

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

    }
};
#endif //LEETCODE_DATASTRUCT_H
