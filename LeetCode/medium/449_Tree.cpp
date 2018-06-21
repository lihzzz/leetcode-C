//
// Created by lh on 2017/10/27.
//

#include "../DataStruct.h"
#include <string>
#include <sstream>

using namespace std;
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream res;
        encodes(root,res);
        return res.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream is(data);
        return Decodes(is);
    }
    void encodes(TreeNode* root,ostringstream& res){
        if(!root)
            res << "# ";
        else{
            res << root->val<<" ";
            this->encodes(root->left,res);
            this->encodes(root->right,res);
        }
    }

    TreeNode* Decodes(istringstream& data){
        string val = "";
        data>>val;
        if(val == "#")
            return NULL;
        TreeNode* node = new TreeNode(stoi(val));
        node->left = this->Decodes(data);
        node->right = this->Decodes(data);
        return node;

    }


};