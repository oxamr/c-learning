/*
 * ============================================================================
 * Exercise: 15-array-reverse
 * Description: Reverse an array in place.
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
    size_t array_size = sizeof(array) / sizeof(array[0]);
    
    int temp = 0;
    int left = 0;
    int right = array_size - 1;
    
    while (left < right) {
        temp = array[left];
        
        array[left] = array[right];
        array[right] = temp;
        
        left++;
        right--;
    }
    
    printf("Reversed array: ");
    
    for (int x = 0; x < array_size; x++) {
        printf("%d ", array[x]);
    }
    
    printf("\n");
    
    return 0;
}