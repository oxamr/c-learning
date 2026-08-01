/*
 * ============================================================================
 * Exercise: 02-io-echo
 * Description: Read a line with `fgets`, print it back.
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
    char input[100];
    
    printf("Input: ");
    fgets(input, sizeof(input), stdin);
    printf("Output: %s\n", input);
    
    return 0;
}