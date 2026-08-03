/*
 * ============================================================================
 * Exercise: 16-array-search
 * Description:  Linear search; return index or -1.
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
    int user_choice;
    int found = 0;
    
    printf("LINEAR SEARCH\n");
    printf("Array: ");
    
    for (int x = 0; x < array_size; x++) {
        printf("%d ", array[x]);
    }
    
    printf("\n");
    printf("Search: ");
    
    if (scanf("%d", &user_choice) != 1) {
        printf("Error: invalid input\n");
        return 1;
    }
    
    for (int y = 0; y < array_size; y++) {
        if (user_choice == array[y]) {
            found = 1;
            printf("Found %d at index %d\n", user_choice, y);
            
            return 0;
        }
    }
    
    if (!found) {
        printf("%d not found\n", user_choice);
    }
    
    return 0;
}