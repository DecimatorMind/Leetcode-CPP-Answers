//
//  Number_of_Students_Doing_Homework_at_a_Given_Time.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 06/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int number_of_students_doing_homework_at_a_given_time(){
    vector<int> startTime {};
    vector<int> endTime {};
    int queryTime {}, result {};
    for(int i = 0;i < startTime.size();i++){
        if(startTime[i] <= queryTime){
            if(endTime[i] >= queryTime){
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
