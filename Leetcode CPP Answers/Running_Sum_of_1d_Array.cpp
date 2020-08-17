//
//  Running Sum of 1d Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 26/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int running_sum_of_1d() {
    vector<int> nums;
    vector<int> runningSum;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++) {
        temp += nums[i];
        runningSum.push_back(temp);
    }
    return 0;
}
