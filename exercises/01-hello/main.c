/*
 * ============================================================================
 * Exercise: 01-hello
 * Description: Print "Hello, World!", then print your name from a variable.
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
     char name[] = "oxamr";
     
     printf("Hello, World!\n");
     printf("by: %s\n", name);
     
     return 0;
 }