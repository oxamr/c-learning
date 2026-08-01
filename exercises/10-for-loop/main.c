/*
 * ============================================================================
 * Exercise: 10-for-loop
 * Description: Print a multiplication table using a for loop.
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
    for (int x = 1; x <= 10; x++) {
        printf("\n");
        for (int y = 1; y <= 10; y++) {
            int sum = x * y;
            printf("%d ", sum);
        }
    }
    
    printf("\n");
    
    return 0;
}