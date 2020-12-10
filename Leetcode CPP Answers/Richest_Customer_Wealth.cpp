//
//  Richest_Customer_Wealth.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 10/12/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(int i = 0;i < accounts.size();i++){
            max = 0;
            int temp = 0;
            for(int j = 0;j < accounts[i].size();j++){
                temp += accounts[i][j];
            }
            max = temp > max ? temp : max;
        }
        return max;
    }
};
