//
//  Generate_a_String_With_Characters_That_Have_Odd_Counts.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 24/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int generate_a_string_with_characters_that_have_odd_counts(){
    int n {28};
    string s {};
    int temp = n%2;
    if(temp == 0){
        n -= 1;
        s += 'b';
    }
    while(n--){
        s += 'a';
    }
    cout << s << endl;
    return 0;
}
