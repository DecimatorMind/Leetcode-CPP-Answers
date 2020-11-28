//
//  N-ary_Tree_Preorder_Traversal.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) {
        if(!root){
            return result;
        }
        result.push_back(root -> val);
        for(int i = 0;i < (root -> children).size();i++){
            preorder(root -> children[i]);
        }
        return result;
    }
};
