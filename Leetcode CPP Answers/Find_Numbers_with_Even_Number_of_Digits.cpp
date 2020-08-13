//
//  Find_Numbers_with_Even_Number_of_Digits.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 31/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int find_numbers_with_even_number_of_digits(){
    vector<int> nums {12,345,2,6,7896};
    int result {};
    for(int i : nums){
        int temp {};
        while(i){
            i /= 10;
            temp += 1;
        }
        if(temp%2 == 0){
            result += 1;
        }
    }
    cout << result << endl;
    return 0;
}
