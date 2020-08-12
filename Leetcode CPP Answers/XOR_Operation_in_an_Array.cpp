//
//  XOR_Operation_in_an_Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 29/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int xor_operation_in_an_array(){
    int n {};
    int start {};
    int result = start;
    for(int i = 1;i < n;i++){
        result ^= start+2*i;
    }
    cout << result << endl;
    return 0;
}
