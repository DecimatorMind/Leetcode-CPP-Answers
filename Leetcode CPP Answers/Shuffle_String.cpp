//
//  Shuffle_String.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int shuffle_string(){
    string s {};
    vector<int> indices {};
    string result = s;
    for(int i = 0;i < s.size();i++){
        result[indices[i]] = s[i];
    }
    cout << result << endl;
    return 0;
}
