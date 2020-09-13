//
//  Squares_of_a_Sorted_Array.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 10/09/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int squares_of_a_sorted_array(){
    vector<int> A {-4,-1,0,3,10};
    for(int i = 0;i < A.size();i++){
        A[i] = A[i]*A[i];
    }
    sort(A.begin(),A.end());
    for(int i : A){
        cout << i << endl;
    }
    return 0;
}
