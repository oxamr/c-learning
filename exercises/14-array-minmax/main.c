/*
 * ============================================================================
 * Exercise: 14-array-minmax
 * Description: Find min and max in one pass.
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
    int array[] = {24, -35, 36, 95, -12};
    int min = array[0];
    int max = array[0];
    
    printf("Array: ");
    
    for (int x = 0; x < sizeof(array) / sizeof(array[0]); x++) {        
        printf("%d ", array[x]);
        
        if (min > array[x]) {
            min = array[x];
        }
        
        if (max < array[x]) {
            max = array[x];
        }
    }
    
    printf("\nMin = %d\nMax = %d\n", min, max);
    
    return 0;
}