/*
 * ============================================================================
 * Exercise: 11-nested-loops
 * Description:  Print a triangle and a diamond of asterisks.
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
    printf("\nTriangle:\n");
    
    for (int x = 1; x <= 5; x++) {
        printf("\n");
        for (int y = 1; y <= x; y++) {
            printf("*");
        }
    }
    
    printf("\n\nUpside down triangle:\n");
    
    for (int x = 1; x <= 5; x++) {
        printf("\n");
        for (int y = 5; y >= x; y--) {
            printf("*");
        }
    }
    
    printf("\n\nFlipped triangle:\n");
        
    for (int x = 1; x <= 5; x++) {
        printf("\n");
        for (int y = 5; y > x; y--) {
            printf(" ");
        }
        for (int z = 1; z <= x; z++) {
            printf("*");
        }
    }
    
    printf("\n\nUpside down flipped triangle:\n");
        
    for (int x = 1; x <= 5; x++) {
        printf("\n");
        for (int y = 1; y < x; y++) {
            printf(" ");
        }
        for (int z = 5; z >= x; z--) {
            printf("*");
        }
    }
    
    printf("\n");
    
    return 0;
}