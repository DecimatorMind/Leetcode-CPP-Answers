//
//  Two_Sum.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 22/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int flag = 0;
        for(int i = 0;i < nums.size()-1;i++){
            for(int j = i+1;j < nums.size();j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        return result;
    }
};
