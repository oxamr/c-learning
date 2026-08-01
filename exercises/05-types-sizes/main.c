/*
 * ============================================================================
 * Exercise: 05-types-sizes
 * Description: Print `sizeof` every primitive type with %zu.
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
    printf("Size of int    : %zu\n", sizeof(int));
    printf("Size of long   : %zu\n", sizeof(long));
    printf("Size of float  : %zu\n", sizeof(float));
    printf("Size of double : %zu\n", sizeof(double));
    printf("Size of char   : %zu\n", sizeof(char));
        
    return 0;
}