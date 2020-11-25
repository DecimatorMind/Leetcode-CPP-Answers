//
//  Fibonacci.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 25/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int N) {
        if(N == 1){
            return 1;
        }
        int result = 0,a = 0,b = 1;
        for(int i = 1;i < N;i++){
            result = (a+b);
            a = b;
            b = result;
        }
        return result;
    }
};
