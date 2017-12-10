//
// Created by lh on 2017/12/10.
//
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class WordFilter {
public:
    struct TrieNode{
        TrieNode* child[26];
        vector<int> word;
        TrieNode(){
            for(auto &a:child)
                a = NULL;
        }
    };
    WordFilter(vector<string> words) {
        root = new TrieNode();
        back = new TrieNode();
        for (int i = 0; i <words.size() ; ++i) {
            string word = words[i];
            insert(word,root,i);
            reverse(word.begin(),word.end());
            insert(word,back,i);
        }

    }

    int f(string prefix, string suffix) {
        auto pre = findword(prefix,root);
        reverse(suffix.begin(),suffix.end());
        auto ba = findword(suffix,back);
        vector<int>::reverse_iterator fiter = pre.rbegin();
        vector<int>::reverse_iterator biter = ba.rbegin();
        while (fiter != pre.rend() && biter != ba.rend()){
            if(*fiter == *biter)
                return *fiter;
            else if(*fiter > *biter)
                fiter++;
            else
                biter++;
        }
        return -1;

    }

private:
    TrieNode* root;
    TrieNode* back;

    void insert(string word,TrieNode* root,int index){
        TrieNode* p = root;
        p->word.push_back(index);
        for(auto& a: word){
            int i = a-'a';
            if(!p->child[i]){
                p->child[i] = new TrieNode();
            }
            p = p->child[i];
            p->word.push_back(index);
        }
    }

    vector<int> findword(string prefix,TrieNode* root){
        if(!root)
            return {};
        if(prefix.size() == 0){
            return root->word;
        }else{
            return findword(prefix.substr(1),root->child[prefix[0] - 'a']);
        }
    }
};

//class WordFilter {
//public:
//
//    WordFilter(vector<string> words) {
//       this->words = words;
//    }
//
//    int f(string prefix, string suffix) {
//        int res = -1;
//        int n = prefix.size(),m = suffix.size();
//        for (int i = words.size()-1; i >=0 ; --i) {
//            int size = words[i].size();
//            if(size < n+m){
//                continue;
//            }
//            if(n!=0 && words[i].substr(0,n) != prefix){
//                continue;
//            }
//            if(m!=0 && words[i].substr(size-m,m) != suffix){
//                continue;
//            }
//            res = i;
//            break;
//        }
//        return res;
//    }
//
//private:
//    vector<string> words;
//};