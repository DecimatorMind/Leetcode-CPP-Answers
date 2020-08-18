//
//  Decrypt_String_from_Alphabet_to_Integer_Mapping.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 14/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int decrypt_string_from_alphabet_to_integer_mapping(){
    string s {};
    char arr[27] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string result {};
    for(int i = 0;i < s.length();i++){
        if(s[i+2] == '#'){
            int temp = (int(s[i])-48)*10 + int(s[i+1]-48);
            cout << temp << endl;
            result += arr[temp-1];
            i+=1;
        } else {
            result += arr[int(s[i])-49];
        }
    }
    cout << result << endl;
    return 0;
}
