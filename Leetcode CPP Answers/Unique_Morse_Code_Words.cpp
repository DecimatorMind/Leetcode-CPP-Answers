//
//  Unique_Morse_Code_Words.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 12/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int unique_morse_code_words(){
    string arr[26] {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> flag {};
    vector<string> words {"gin", "zen", "gig", "msg"};
    for(string i : words){
        string temp;
        for(char j : i){
            temp += arr[int(j)-97];
        }
        flag.push_back(temp);
        cout << i << " " << temp << endl;
    }
    sort( flag.begin(), flag.end() );
    flag.erase( unique( flag.begin(), flag.end() ), flag.end() );
    cout << flag.size() << endl;
    return 0;
}
