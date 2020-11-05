//
//  Convert_Binary_Number_in_a_Linked_List_to_Integer.cpp
//  Leetcode CPP Answers
//
//  Created by Pranjal Bhardwaj on 04/11/20.
//  Copyright © 2020 Pranjal Bhardwaj. All rights reserved.
//

#include <stdio.h>
#include <cmath>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = head->val;
        while((head=head->next))  ans = ans*2 + head->val;
        return ans;
    }
};
