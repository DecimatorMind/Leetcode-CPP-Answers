//
//  Self_Dividing_Numbers.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int self_dividing_numbers(){
    int left {66}, right {200};
    vector<int> result {};
    for(int i = left;i <= right;i++){
        if(i < 10){
            result.push_back(i);
            continue;
        }
        int temp = i*1,flag = 0,n = 0;
        while(temp){
            if(temp%10 == 0){
                flag = -1;
                break;
            }
            if(i%(temp%10) == 0){
                flag += 1;
            }
            n += 1;
            temp /= 10;
        }
        if(flag != -1 && flag == n){
            result.push_back(i);
        }
    }
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}
