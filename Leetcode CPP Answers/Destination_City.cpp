//
//  Destination_City.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 10/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int destination_city(){
    vector<vector<string>> paths {{"A","Z"}};
    int len = int(paths.size());
    string start[len];
    string end[len];
    for (int i = 0; i < len; i++) {
        start[i] = paths[i][0];
        end[i] = paths[i][1];
    }
    for(int i = 0;i < len;i++){
        for(int j = 0; j < len;j++){
            if(start[i] == end[j]){
                end[j] = "";
            }
        }
    }
    for(int i = 0;i < len;i++){
        if(end[i] != ""){
            cout <<  end[i] << endl;
        }
    }
    return 0;
}
