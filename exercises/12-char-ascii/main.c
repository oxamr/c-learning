/*
 * ============================================================================
 * Exercise: 12-char-ascii
 * Description: Print each char A-Z with its ASCII value.
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
    char alphabet[] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
        'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
        'Y', 'Z'
    };
    
    for (int x = 0; x < sizeof(alphabet); x++) {
        printf("%c = %d\n", alphabet[x], alphabet[x]);
    }
    
    printf("\n");
    
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%d = %c\n", c, c);
    }
    
    return 0;
}