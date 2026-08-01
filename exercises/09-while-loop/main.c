/*
 * ============================================================================
 * Exercise: 09-while-loop
 * Description: Sum integers from user until they enter 0.
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
    int input = 1;
    int sum = 0;
    
    while (input != 0) {
        printf("Enter integer: ");
        if (scanf("%d", &input) != 1) {
            printf("Error: invalid input\n");
            return 1;
        }
        
        sum += input;
    }
    
    printf("Total = %d\n", sum);
    
    return 0;
}