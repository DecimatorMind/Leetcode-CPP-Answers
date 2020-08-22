//
//  Split_a_String_in_Balanced_Strings.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 30/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int split_a_string_in_balanced_string(){
    string s {"RLRRRLLRLL"};
    int r {},l {},result {};
    for(char i : s){
        r += i=='R' ? 1 : 0;
        l += i=='L' ? 1 : 0;
        result += r==l ? 1 : 0;
    }
    cout << result << endl;
    return 0;
}
