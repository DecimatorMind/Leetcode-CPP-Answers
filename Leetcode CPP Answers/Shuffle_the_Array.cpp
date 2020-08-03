//
//  Shuffle_the_Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 26/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int shuffle_the_array(){
    vector<int> nums;
    vector<int> shuffle;
    int n = 0;
    vector<int> first (nums.begin(),nums.begin()+n);
    vector<int> second (nums.begin()+n,nums.end());
    for (int i = 0; i < n; i++) {
        shuffle.push_back(first[i]);
        shuffle.push_back(second[i]);
    }
    for(int i : shuffle){
        cout << i << endl;
    }
    return 0;
}
