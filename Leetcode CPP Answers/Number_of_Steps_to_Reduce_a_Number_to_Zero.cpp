//
//  Number_of_Steps_to_Reduce_a_Number_to_Zero.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int number_of_steps_to_reduce_a_number_to_zero(){
    int num {};
    int result {0};
    while(num){
        if(num%2 == 0){
            num /= 2;
        } else {
            num -= 1;
        }
        result += 1;
    }
    cout << result << endl;
    return 0;
}
