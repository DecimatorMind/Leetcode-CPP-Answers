//
//  DI_String_Match.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 10/09/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int di_string_match(){
    vector<int> arr {};
    string s {"DDI"};
    s += s[s.length()-1];
    int a = int(s.length());
    int b = -1;
    for(auto i : s){
        if(i == 'D'){
            arr.push_back(a-1);
            a -= 1;
        } else {
            arr.push_back(b+1);
            b += 1;
        }
    }
    for(int i = 0;i < s.length();i++){
        cout << arr[i] << endl;
    }
    return 0;
}
