//
//  Maximum_69_Number.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 08/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int maximum_69_number(){
    int num {9669};
    int flag {};
    string temp {};
    string s = to_string(num);
    for(auto i : s){
        if(i == '9'){
            temp += "9";
        } else if(i == '6' && flag == 0){
            temp += "9";
            flag = 1;
        } else if(i == '6'){
            temp += "6";
        }
    }
    int result = stoi(temp);
    cout << result << endl;
    return 0;
}
