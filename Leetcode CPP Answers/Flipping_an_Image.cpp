//
//  Flipping_an_Image.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 19/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int flipping_an_image(){
    vector<vector<int>> A {{1,1,0},{1,0,1},{0,0,0}};
    for(int i = 0;i < A.size();i++){
        for(int j = 0;j < A[i].size();j++){
            if(A[i][j] == 0){
                A[i][j] = 1;
            } else {
                A[i][j] = 0;
            }
        }
    }
    for(int i = 0;i < A.size();i++){
        reverse(A[i].begin(),A[i].end());
    }
    for (int i = 0; i < A.size(); i++) {
        for(int j = 0;j < A[i].size();j++){
            cout << A[i][j] << " ";
        }
    }
    return 0;
}
