/*
 * ============================================================================
 * Exercise: 07-conditionals
 * Description: Classify a number: negative/zero/positive, even/odd.
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
    int input;
    
    printf("Enter integer: ");
    if (scanf("%d", &input) != 1) {
        printf("Error: invalid input\n");
        return 1;
    }
    
    if (input < 0) {
        printf("%d is negative ", input);
    } else if (input == 0) {
        printf("%d is zero ", input);
    } else {
        printf("%d is positive ", input);
    }
    
    if (input % 2 == 0) {
        printf("and even\n", input);
    } else {
        printf("and odd\n", input);
    }
    
    return 0;
}