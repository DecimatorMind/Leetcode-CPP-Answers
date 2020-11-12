
//
//  Final_Prices_With_a_Special_Discount_in_a_Shop.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 23/08/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int final_prices_with_a_special_discount_in_a_shop(){
    vector<int> prices {8,4,6,2,3};
    vector<int> result {};
    for(int i = 0;i < prices.size();i++){
        bool flag = 1;
        int j = i+1;
        while (flag && j < prices.size()) {
            if(prices[j] <= prices[i]){
                result.push_back(prices[i]-prices[j]);
                flag = 0;
            } else {
                j += 1;
            }
        }
        if(flag == 1){
            result.push_back(prices[i]);
        }
    }
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}
