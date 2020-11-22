//
//  Count_Negative_Numbers_in_a_Sorted_Matrix.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 15/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int count_negative_numbers_in_a_sorted_matrix(){
    vector<vector<int>> grid {{3,2},{1,0}};
    int result {};
    for(int i = 0;i < grid.size();i++){
        for(int j = 0;j < grid[i].size();j++){
            if(grid[i][j] < 0){
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
