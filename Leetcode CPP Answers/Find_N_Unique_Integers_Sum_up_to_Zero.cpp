//
//  Find_N_Unique_Integers_Sum_up_to_Zero.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 15/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int find_n_unique_integers_sum_up_to_zero(){
    int n {4};
    vector<int> result {};
    for(int i = 1;i <= (n/2);i++){
        result.push_back(i);
        result.push_back(i*(-1));
    }
    if(n%2 != 0){
        result.push_back(0);
    }
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}
