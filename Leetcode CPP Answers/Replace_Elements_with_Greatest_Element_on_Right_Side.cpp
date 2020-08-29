//
//  Replace_Elements_with_Greatest_Element_on_Right_Side.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 28/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int replace_elements_with_the_greatest_element_on_the_right_side(){
    vector<int> arr {};
    vector<int> result {};
    for(int i = 0;i < arr.size();i++){
        int max {-1};
        for(int j = i+1;j < arr.size();j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }
        result.push_back(max);
    }
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}
