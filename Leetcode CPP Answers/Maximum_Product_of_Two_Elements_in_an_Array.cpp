//
//  Maximum_Product_of_Two_Elements_in_an_Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 07/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int maximum_product_of_two_elements_in_an_array(){
    vector<int> nums {3,7};
    int max1 = 0,max2 = 0;
    int flag {0};
    for(int i = 0;i < nums.size();i++){
        if(nums[i] > max1){
            max1 = nums[i];
            flag = i;
        }
    }
    nums[flag] = 0;
    for(auto i : nums){
        max2 = i > max2 ? i : max2;
    }
    cout << (max1-1)*(max2-1) << endl;
    return 0;
}
