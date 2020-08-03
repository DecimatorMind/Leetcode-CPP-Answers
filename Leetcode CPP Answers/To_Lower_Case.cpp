//
//  To_Lower_Case.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 02/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int to_lower_case(){
    string str {};
    string result {};
    for(char i : str){
        result += isupper(i) ? tolower(i) : i;
    }
    cout << result << endl;
    return 0;
}
