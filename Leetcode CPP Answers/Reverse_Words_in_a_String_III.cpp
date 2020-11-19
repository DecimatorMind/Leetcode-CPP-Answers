//
//  Reverse_Words_in_a_String_III.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 19/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> result;
        string temp = "",solution = "";
        for(int i = 0;i < s.length();i++){
            if(s[i] != ' '){
                temp += s[i];
            } else {
                result.push_back(temp);
                temp = "";
           }
        }
        result.push_back(temp);
        for(int i = 0;i < result.size();i++){
            for(int j = int(result[i].size());j >= 0;j--){
                solution += result[i][j];
            }
            if(i != result.size()-1){
                solution += " ";
            }
        }
        return solution;
    }
};
