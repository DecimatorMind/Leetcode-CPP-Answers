//
//  Defanging_an_IP_Address.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 27/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int defanging_an_IP_address(){
    string address {};
    string result = "";
    for(int i = 0;i < address.size();i++){
        if(address[i] == '.'){
            result += "[";
            result += address[i];
            result += "]";
        } else {
            result += address[i];
        }
    }
    cout << result << endl;
    return 0;
}
