/*
 * ============================================================================
 * Exercise: 13-array-sum
 * Description: Sum a fixed array; compute the average.
 * File: main.c
 * Author: oxamr
 *
 * Copyright (c) 2026 oxamr.
 * All rights reserved.
 *
 * This source code is part of my personal C learning journey.
 * Please do not submit this work as your own.
 * ============================================================================
 */
 
#include <stdio.h>

int main(void) {
    // Write solution here
    int array[] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    printf("Array: ");
    
    for (int x = 0; x < sizeof(array) / sizeof(array[0]); x++) {
        printf("%d ", array[x]);
        sum += array[x];
    }
    
    int average = sum / (sizeof(array) / sizeof(array[0]));
    
    printf("\nSum = %d\n", sum);
    printf("Average = %d\n", average);
    
    return 0;
}