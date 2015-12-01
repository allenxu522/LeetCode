//
//  main.c
//  2_Add_Two_Numbers
//
//  Created by Allen Xu on 12/1/15.
//  Copyright © 2015 Allen Xu. All rights reserved.
//

/*  Problem Description
 You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 */

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL && l2 == NULL) {
        return NULL;
    }
    
    long num1 = 0, num2 = 0;
    
    if (l1) {
    struct ListNode* p1 = l1;
    int bit1 = 0;
    
    while (p1) {
        long c_num = 1;
        for (int i = 0; i < bit1; i++) {
            c_num *= 10;
        }
        
        num1 += c_num * p1->val;
        
        bit1++;
        p1 = p1->next;
    }
    }
    
    if (l2) {
    struct ListNode* p2 = l2;
    int bit2 = 0;
    
    while (p2) {
        long c_num2 = 1;
        for (int j = 0; j < bit2; j++) {
            c_num2 *= 10;
        }
        
        num2 += c_num2 * p2->val;
        
        bit2++;
        p2 = p2->next;
    }
    }
    
    long num = num1 + num2;
    struct ListNode* pList = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* p_result = pList;
    
    if (num / 10 == 0) {
        pList->val = num;
        pList->next = NULL;
    }
    else {
    do {
        struct ListNode* p_c = (struct ListNode*)malloc(sizeof(struct ListNode));
        pList->val = num % 10;
        pList->next = p_c;
        pList = pList->next;
    } while (num / 10 != 0);
    }
    return p_result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
