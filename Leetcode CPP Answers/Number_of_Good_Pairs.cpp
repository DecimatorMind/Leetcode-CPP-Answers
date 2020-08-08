//
//  Number_of_Good_Pairs.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 27/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int number_of_good_pairs(){
    int result = 0;
    vector<int> nums {1,2,3,1,1,3};
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if(nums[i] == nums[j]){
                result += 1;
            }
        }
    }
    cout << result << endl;
    return 0;
}
