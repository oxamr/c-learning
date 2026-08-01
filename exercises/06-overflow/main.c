/*
 * ============================================================================
 * Exercise: 06-overflow
 * Description: Deliberately overflow a signed int; watch it wrap.
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
    int signed_min = -2147483648;
    int signed_max = 2147483647;
    
    printf("%d\n", signed_min - 1);
    printf("%d\n", signed_max + 1);
    
    return 0;
}