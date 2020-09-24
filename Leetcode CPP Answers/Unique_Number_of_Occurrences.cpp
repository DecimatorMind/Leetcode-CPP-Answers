//
//  Unique_Number_of_Occurrences.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 24/09/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int unique_number_of_occurences(){
    vector<int> arr {1,2,2,1,1,3};
    int temp[arr.size()][2];
    for(int i = 0;i < arr.size();i++){
        temp[i][0] = arr[i];
        temp[i][1] = 0;
        for(int j = 0;j < arr.size();j++){
            if(temp[i][0] == arr[j]){
                temp[i][1] += 1;
            }
        }
    }
    int flag = 0;
    for(int i = 0;i < arr.size();i++){
        for(int j = i+1;j < arr.size();j++){
            if(temp[i][0] != temp[j][0] && temp[i][1] == temp[j][1]){
                flag = 1;
                break;
            }
        }
    }
    cout << boolalpha;
    if(flag == 0){
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    return 0;
}
