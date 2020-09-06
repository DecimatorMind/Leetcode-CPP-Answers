
//
//  Robot_Return_to_Origin.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 30/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int robot_return_to_the_origin(){
    string moves {"LL"};
    int a {},b {};
    for(char i : moves){
        switch (i) {
            case 'U':
                a += 1;
                break;
            case 'D':
                a -= 1;
                break;
            case 'L':
                b += 1;
                break;
            case 'R':
                b -= 1;
                break;
        }
    }
    cout << boolalpha;
    cout << ( a == 0 && b == 0 ) << endl;
    return 0;
}
