//
//  Increasing_Decreasing_String.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 22/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int increasing_decreasing_strings(){
    string s {"aaaabbbbcccc"};
    string result {""};
    int temp[26] {0};
    for(char i : s){
        temp[int(i)-'a']++;
    }
    while(s.length()>result.length()){
        for (int i = 0; i < 26; i++) {
            if(temp[i] > 0){
                result += i+'a';
                temp[i]--;
            }
        }
        for (int i = 25; i >= 0; i--) {
            if(temp[i] > 0){
                result += i+'a';
                temp[i]--;
            }
        }
    }
    cout << result << endl;
    return 0;
}
