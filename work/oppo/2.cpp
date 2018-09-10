//
// Created by lh on 2018/9/10.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;
typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
}node;
void _BST2List(TreeNode* pRoot, TreeNode**pRev)
{
    if (NULL == pRoot)
        return;
    TreeNode*pCur=pRoot;
    if(pCur->left!=NULL)//递归左子树
        _BST2List(pCur->left,pRev);
    pCur->left=*pRev;
    if(*pRev!=NULL)
        (*pRev)->right=pCur;
    *pRev=pCur;
    if(pCur->right!=NULL)
        _BST2List(pCur->right,pRev);
}
TreeNode* Convert(struct TreeNode* pRootOfTree)
{
    TreeNode* pNode = NULL;
    _BST2List(pRootOfTree,&pNode);
    TreeNode* pHead = pNode;
    while (pHead!=NULL&&pHead->left!=NULL)
        pHead = pHead->left;
    return pHead;
}

int main(){
    vector<int> data;
    unordered_set<int>s;

    string str;
    getline(cin,str);
    istringstream is(str);
    int a = 0;
    while(is){
        is>>a;
        s.insert(a);
        data.push_back(a);
    }

    vector<int> number(s.begin(),s.end());
    int head = data[0];
    TreeNode* headNode = new node(head);

    sort(number.begin(),number.end());
    auto it = find(number.begin(),number.end(),head);
    int dis = it-number.begin();
    auto pre = number.begin();
    if(dis<2 && dis!=0){
        pre = number.begin();
    }else if(dis==0){
        pre = NULL;
    }else{
        pre= number.begin()+(it-number.begin());
        pre--;
    }
    auto next = it+1;
    TreeNode* left = headNode;
    while(pre!= number.begin() && pre!=NULL){
        left->left = new node(*pre--);
        left = left->left;
    }
    left->left = new node(*pre--);
    left = left->left;
    TreeNode* right = headNode;
    while(next!=number.end()){
        right->right = new node(*next++);
        right = right->right;
    }
    auto res = Convert(headNode);
    while(res){
        cout << res->val << " ";
        res = res->right;
    }
}