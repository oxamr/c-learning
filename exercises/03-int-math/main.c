/*
 * ============================================================================
 * Exercise: 03-int-math
 * Description: Read two ints, print sum/diff/product/quotient/remainder.
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
    int input_a;
    int input_b;
    
    printf("Enter first integer: ");
    if (scanf("%d", &input_a) != 1) {
        printf("Error: invalid input");
        return 1;
    }
    
    printf("Enter second integer: ");
    if (scanf("%d", &input_b) != 1) {
        printf("Error: invalid input");
        return 1;
    }
    
    int sum = input_a + input_b;
    printf("%d + %d = %d\n", input_a, input_b, sum);
    
    int difference = input_a - input_b;
    printf("%d - %d = %d\n", input_a, input_b, difference);
    
    int product = input_a * input_b;
    printf("%d * %d = %d\n", input_a, input_b, product);
    
    if (input_b == 0) {
        printf("Error: cannot divide by zero\n");
    } else {
        int quotient = input_a / input_b;
        printf("%d / %d = %d\n", input_a, input_b, quotient);
        
        int remainder = input_a % input_b;
        printf("%d r %d = %d\n", input_a, input_b, remainder);
    }
    
    return 0;
}