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
        vector<string>temp;
        string flag="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                temp.push_back(" ");
                temp.push_back(flag);
                flag="";
            }else{
                flag+=s[i];
            }
        }
        temp.push_back(" ");
        temp.push_back(flag);
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=" ")
                reverse(temp[i].begin(),temp[i].end());
        }
        s="";
        for(int i=1;i<temp.size();i++){
            s+=temp[i];
        }
        return s;
    }
};
