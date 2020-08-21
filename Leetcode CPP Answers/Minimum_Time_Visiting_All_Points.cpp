//
//  Minimum_Time_Visiting_All_Points.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 02/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int minimum_time_visiting_all_points(){
    vector<vector<int>> points {{1,1},{3,4},{-1,0}};
    int result {};
    for(int i = 0;i < points.size()-1;i++){
        result += max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
    }
    cout << result << endl;
    return 0;
}
