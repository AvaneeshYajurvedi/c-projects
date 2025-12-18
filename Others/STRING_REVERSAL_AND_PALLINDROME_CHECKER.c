/*
-----------------------------------------------------------------------
                  STRING REVERSAL & PALINDROME CHECKER
-----------------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program reads a string from the user, calculates its 
           length, prints the reversed string, and checks whether 
           the original string is a palindrome.

           Concepts Demonstrated:
             • Character arrays and string manipulation
             • Loops for traversal and reversal
             • Conditional checking for palindrome logic
             • Input validation for string length

           A simple program to practice string handling and 
           algorithmic logic in C.
-----------------------------------------------------------------------
*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>



int main()
{
    char str[101];
    scanf("%100s", str);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char rev[101];
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';
    int isPal = 1;
    for (int i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            isPal = 0;
            break;
    }}
    printf("Length = %d\n", length);
    printf("Reversed = %s\n", rev);
    printf("Palindrome = %s", isPal ? "Yes" : "No");
    return 0;} 
