//
//  Valid_Palindrome.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 04/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int valid_palindrome(){
    string s {"race a car"};
    string strip {};
    string temp {};
    for(char i : s){
        if(isalnum(i)){
            strip += tolower(i);
        }
    }
    for(int i = int(strip.length()-1);i >= 0; i--){
        temp += strip[i];
    }
    cout << boolalpha;
    cout << (strip == temp ? true : false) << endl;
    return 0;
}
