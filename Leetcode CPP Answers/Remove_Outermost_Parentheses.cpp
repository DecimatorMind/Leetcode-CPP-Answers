//
//  Remove_Outermost_Parentheses.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 01/12/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        int flag = 0,l = int(S.length());
        string result;
        for(int i = 0;i < l;i++){
            if(S[i] == '('){
                flag += 1;
                result = flag > 1 ? "(" : "";
            } else {
                flag -= 1;
                result = flag > 0 ? ")" : "";
            }
        }
        return result;
    }
};
