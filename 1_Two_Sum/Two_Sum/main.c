//
//  main.c
//  Two_Sum
//
//  Created by Allen Xu on 11/30/15.
//  Copyright © 2015 Allen Xu. All rights reserved.
//

/*  Problem Description
 Given an array of integers, find two numbers such that they add up to a specific target number.
 
 The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 
 You may assume that each input would have exactly one solution.
 
 Input: numbers={2, 7, 11, 15}, target=9
 Output: index1=1, index2=2
 */

#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    int* numIndexs;
    numIndexs = (int*)malloc(2*sizeof(int));
    
    numIndexs[0] = numIndexs[1] = 0;
    
    int findit = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                findit = 1;
                numIndexs[0] = i+1;
                numIndexs[1] = j+1;
                break;
            }
        }
        if (findit) {
            break;
        }
    }
    
    return numIndexs;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int nums[4] = {2, 7, 11, 15};
    
    int* indexs;
    indexs = twoSum(nums, 4, 9);
    
    printf("index1 = %d, index2 = %d. \n", indexs[0], indexs[1]);
    
    return 0;
}
