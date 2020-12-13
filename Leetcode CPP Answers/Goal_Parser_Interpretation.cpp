//
//  Goal_Parser_Interpretation.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 10/12/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string result = "";
        for(int i = 0;i < command.size();i++){
            if(command[i] == 'G'){
                result += "G";
            } else if(command[i] == '('){
                if(command[i+1] == ')'){
                    result += "o";
                    i += 1;
                } else {
                    result += "al";
                    i += 3;
                }
            }
        }
        return result;
    }
};
