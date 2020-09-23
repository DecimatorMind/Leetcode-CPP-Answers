//
//  Matrix_Diagonal_Sum.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 22/09/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int matrix_diagonal_sum(){
    vector<vector<int>> mat {{}};
    int result {};
    for(int i = 0;i < mat.size();i++){
        for(int j = 0;j < mat[i].size();j++){
            if(i == j){
                result += mat[i][j];
            } else if(i+j == mat.size()-1){
                result += mat[i][j];
            }
        }
    }
    cout << result << endl;
    return 0;
}
