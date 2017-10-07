//
// Created by lh on 2017/10/6.
//
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//    string replaceWords(vector<string>& dict, string sentence) {
//        stringstream ss(sentence);
//        string str,res="";
//        vector<vector<string>> m(26);
//        sort(dict.begin(),dict.end(),[](string& a,string &b){
//            return a.size()<b.size();
//        });
//        for(auto a:dict)
//            m[a[0] - 'a'].push_back(a);
//        while (ss>>str){
//            for(auto word:m[str[0]- 'a']){
//                if(str.substr(0,word.size()) == word){
//                    str = word;
//                    break;
//                }
//            }
//            res += str+" ";
//        }
//        res.pop_back();
//        return res;
//    }
//};


class Solution {
public:
    class TrieNode{
    public:
        TrieNode* child[26];
        bool isWord;
        TrieNode():isWord(false){
            for(auto& a:child)
                a = NULL;
        }
    };
    string replaceWords(vector<string>& dict, string sentence) {
        string res= "",t = "";
        stringstream ss(sentence);
        TrieNode* root = new TrieNode();
        for(auto a:dict)
            insert(root,a);
        while (ss>>t){
            if(!res.empty()) res += " ";
            res += findprex(root,t);
        }
        return res;
    }
    void insert(TrieNode* root,string word){
        for(auto a:word){
            if(!root->child[a-'a'])
                root->child[a-'a'] = new TrieNode();
            root = root->child[a-'a'];
        }
        root->isWord=true;
    }

    string findprex(TrieNode* root,string word){
        string res="";
        for(auto a:word){
            if(!root->child[a-'a']) break;
            res.push_back(a);
            root = root->child[a-'a'];
            if(root->isWord) return res;
        }
        return word;
    }
};