//
//  Subtract_the_Product_and_Sum_of_Digits_of_an_Integer.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 30/07/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <iostream>
using namespace std;

int subtract_the_product_and_sum_of_digits_of_an_integer(){
    int n {};
    int sum {};
    int product {1};
    while(n){
        sum += n%10;
        product *= n%10;
        n /= 10;
    }
    cout << (product - sum) << endl;
    return 0;
}
