//
//  Check_If_Two_String_Arrays_are_Equivalent.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 27/12/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp,flag;
        for(int i = 0;i < word1.size();i++){
            temp += word1[i];
        }
        for(int i = 0;i < word2.size();i++){
            flag += word2[i];
        }
        if(temp == flag){
            return true;
        } else {
            return false;
        }
    }
};

