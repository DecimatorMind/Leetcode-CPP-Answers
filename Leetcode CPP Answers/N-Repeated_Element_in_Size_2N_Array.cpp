//
//  N-Repeated_Element_in_Size_2N_Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 29/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int n_repeated_elements_in_size_2n_array(){
    vector<int> A {1,2,3,3};
    int arr[10000] {0};
    for(int i : A){
        arr[i]++;
    }
    for(int i = 0;i < 10000;i++){
        if(arr[i] > 0 && arr[i] == (A.size()/2)){
            cout << i << endl;
        }
    }
    return 0;
}
