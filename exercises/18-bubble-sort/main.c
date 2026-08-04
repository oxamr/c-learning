/*
 * ============================================================================
 * Exercise: 18-bubble-sort
 * Description: Implement bubble sort.
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
    int arr[] = {10, 50, -5, 40, 25, 80, 100, 29};
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);
    
    int temp = 0;
    
    printf("Array: ");
    
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Bubble sort
    for (size_t pass = 0; pass < arr_size - 1; pass++) {
        for (size_t i = 0; i < arr_size - 1 - pass; i++) {
            if (arr[i] > arr[i - 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    
    printf("\n");
    printf("Bubble sorted array: ");
    
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}