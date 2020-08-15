//
//  Kids_With_the_Greatest_Number_of_Candies.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 27/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int kids_with_the_greatest_number_of_candies(){
    vector<int> candies {12,1,12};
    vector<bool> result;
    int extraCandies = 10;
    int max = candies[0];
    for (int i = 0; i < candies.size(); i++) {
        max = max<candies[i] ? candies[i] : max;
    }
    for (int i = 0; i < candies.size(); i++) {
        bool temp = (candies[i]+extraCandies >= max);
        result.push_back(temp);
    }
    cout << boolalpha;
    for (bool x : result){
        cout << x << endl;
    }
    return 0;
}
