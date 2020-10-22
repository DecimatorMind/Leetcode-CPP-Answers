//
//  Maximum_Nesting_Depth_of_the_Parentheses.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 21/10/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int a = int(s.length());
        int result = 0,max = 0;
        for(int i = 0;i < a;i++){
            if(s[i] == '('){
                result += 1;
            } else if(s[i] == ')'){
                result -= 1;
            }
            if(result > max){
                max = result;
            }
        }
        return max;
    }
};
