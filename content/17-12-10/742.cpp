//
// Created by lh on 2017/12/10.
//

#include "../../DataStruct.h"
#include <queue>
#include <unordered_map>
#include <set>
using namespace std;
//class Solution {
//public:
//    int findClosestLeaf(TreeNode* root, int k) {
//        unordered_map<int,TreeNode*> m;
//        unordered_map<int,set<int>> graph;
//        constructgraph(root,m,graph);
//        queue<int> q;
//        q.push(k);
//        while (!q.empty()){
//            int n = q.size();
//            for (int i = 0; i <n ; ++i) {
//                TreeNode* node = m[q.front()];
//                q.pop();
//                if(!node->left && !node->right){
//                    return node->val;
//                }
//                if(!graph.count(node->val))
//                    continue;
//
//                for(auto& a:graph[node->val]){
//                    TreeNode* cur = m[a];
//                    if(!cur->left && !cur->right){
//                        return cur->val;
//                    }
//                    q.push(cur->val);
//                }
////                set<int>::iterator iter;
////                for ( iter = graph[node->val].begin();  iter!=  graph[node->val].end() ; ++iter) {
////                    TreeNode* cur = m[*iter];
////                    if(!cur->left && !cur->right){
////                        return cur->val;
////                    }
////                    q.push(cur->val);
////                }
//                graph.erase(node->val);
//            }
//        }
//    }
//    void constructgraph(TreeNode* root,unordered_map<int,TreeNode*>& m,unordered_map<int,set<int>>& graph){
//        if(!root)
//            return;
//        m[root->val] = root;
//        if(root->left){
//            graph[root->val].insert(root->left->val);
//            graph[root->left->val].insert(root->val);
//            constructgraph(root->left,m,graph);
//        }
//        if(root->right){
//            graph[root->val].insert(root->right->val);
//            graph[root->right->val].insert(root->val);
//            constructgraph(root->right,m,graph);
//        }
//    }
//};


class Solution {
public:
    int findClosestLeaf(TreeNode* root, int k) {
        unordered_map<int,set<int>> graph;
        set<int> leaf;
        constructgraph(root,graph,leaf);
        queue<int> q;
        q.push(k);
        while (!q.empty()){
            int n = q.size();
            for (int i = 0; i <n ; ++i) {
                int cur_val = q.front();
                q.pop();
                if(leaf.count(cur_val)){
                    return cur_val;
                }
                if(!graph.count(cur_val))
                    continue;
                for(auto& a:graph[cur_val]){
                    if(leaf.count(a)){
                        return a;
                    }
                    q.push(a);
                }
                graph.erase(cur_val);
            }
        }
    }
    void constructgraph(TreeNode* root,unordered_map<int,set<int>>& graph,set<int>& leaf){
        if(!root)
            return;
        if(!root->left && !root->right){
            leaf.insert(root->val);
            return;
        }
        if(root->left){
            graph[root->val].insert(root->left->val);
            graph[root->left->val].insert(root->val);
            constructgraph(root->left,graph,leaf);
        }
        if(root->right){
            graph[root->val].insert(root->right->val);
            graph[root->right->val].insert(root->val);
            constructgraph(root->right,graph,leaf);
        }
    }
};
