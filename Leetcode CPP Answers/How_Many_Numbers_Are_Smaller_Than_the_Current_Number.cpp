//
//  How_Many_Numbers_Are_Smaller_Than_the_Current_Number.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 29/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int how_many_numbers_are_smaller_than_the_current_number(){
    vector<int> nums {};
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int x {};
        for (int j = 0;j < nums.size(); j++) {
            if(nums[j] < nums[i]){
                x += 1;
            }
        }
        result.push_back(x);
    }
    for(int j : result){
        cout << j << endl;
    }
    return 0;
}
