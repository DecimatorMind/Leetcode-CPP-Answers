//
//  Count_of_Matches_in_Tournament.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 02/01/21.
//  Copyright © 2021 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfMatches(int n) {
        int result = 0;
        if(n == 1){
            return 0;
        }
        while(n >= 2){
            if(n%2 == 0){
                result += n/2;
                n /= 2;
            } else {
                result += (n-1)/2;
                n = n/2;
            }
        }
        return result;
    }
};
