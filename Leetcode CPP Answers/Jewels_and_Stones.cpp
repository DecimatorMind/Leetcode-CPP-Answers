//
//  Jewels_and_Stones.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int jewels_and_stones(){
    string J {"z"};
    string S {"ZZ"};
    int result = 0;
    for (int i = 0; i < J.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            if(J[i] == S[j]){
                result += 1;
            }
        }
    }
    cout << result << endl;
    return 0;
}
