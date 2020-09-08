//
//  Hamming_Distance.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 08/09/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int hamming_distance(){
    int x {1},y {4};
    int temp = x^y;
    int result = 0;
    while(temp > 0){
        if(temp%2==1){
            result += 1;
        }
        temp/=2;
    }
    
    cout << result << endl;
    return 0;
}
