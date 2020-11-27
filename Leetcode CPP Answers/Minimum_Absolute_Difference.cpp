//
//  Minimum_Absolute_Difference.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 27/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        int min = arr[arr.size()-1] - arr[0];
        for(int i = 0;i < arr.size()-1;i++){
            if(arr[i+1]-arr[i] < min){
                min = arr[i+1]-arr[i];
            }
        }
        for(int i = 0;i < arr.size()-1;i++){
            if(arr[i+1]-arr[i] == min){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                result.push_back(temp);
            }
        }
        return result;
    }
};
