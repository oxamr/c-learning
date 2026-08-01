/*
 * ============================================================================
 * Exercise: 04-float-math
 * Description: Same as 03-int-math with doubles.
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
#include <math.h>

int main(void) {
    // Write solution here
    double input_a;
    double input_b;
    
    printf("Enter first double: ");
    if (scanf("%lf", &input_a) != 1) {
        printf("Error: invalid input\n");
        return 1;
    }
    
    printf("Enter second double: ");
    if (scanf("%lf", &input_b) != 1) {
        printf("Error: invalid input\n");
        return 1;
    }
    
    double sum = input_a + input_b;
    printf("%.2lf + %.2lf = %.2lf\n", input_a, input_b, sum);
    
    double difference = input_a - input_b;
    printf("%.2lf - %.2lf = %.2lf\n", input_a, input_b, difference);
    
    double product = input_a * input_b;
    printf("%.2lf * %.2lf = %.2lf\n", input_a, input_b, product);
    
    if (input_b == 0) {
        printf("Error: cannot divide by zero\n");
    } else {
        double quotient = input_a / input_b;
        printf("%.2lf / %.2lf = %.2lf\n", input_a, input_b, quotient);
        
        double remainder = fmod(input_a, input_b);
        printf("%.2lf r %.2lf = %.2lf\n", input_a, input_b, remainder);
    }
    
    return 0;
}