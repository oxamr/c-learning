/*
 * ============================================================================
 * Exercise: 08-fizzbuzz
 * Description: Print numbers from 1 to 100 using the FizzBuzz rules.
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
     for (int x = 1; x <= 100; x++) {
         if (x % 3 == 0 && x % 5 == 0) {
             printf("fizzbuzz\n");
         } else if (x % 5 == 0) {
             printf("buzz\n");
         } else if (x % 3 == 0) {
             printf("fizz\n");
         } else {
             printf("%d\n", x);
         }
     }
          
     return 0;
 }