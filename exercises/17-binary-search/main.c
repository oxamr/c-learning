/*
 * ============================================================================
 * Exercise: 17-binary-search
 * Description: Binary search on a sorted array.
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
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    size_t array_size = sizeof(array) / sizeof(array[0]);
    
    int left = 0;
    int right = array_size - 1;
    int user_choice;
    
    printf("BINARY SEARCH\n");
    printf("Array: ");
    
    for (int x = 0; x < array_size; x++) {
        printf("%d ", array[x]);
    }
    
    printf("\n");
    printf("Search: ");
    
    if (scanf("%d", &user_choice) != 1) {
        printf("Error: invalid input");
        return 1;
    }
    
    while (left <= right) {
        int middle = (left + right) / 2;
        
        if (user_choice == array[middle]) {
            printf("%d found at index %d\n", user_choice, middle);
            return 0;
        } else if (user_choice > array[middle]) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    } 
    
    printf("%d not found\n", user_choice);
    
    return 0;
}