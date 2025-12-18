/*
-----------------------------------------------------------------------
                ARRAY STATISTICS & ELEMENT SEARCH
-----------------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program reads 'n' integers into an array and performs:
             • Finding the largest and smallest elements
             • Calculating the sum and average of the elements
             • Searching for a specific element in the array

           Concepts Demonstrated:
             • Array handling and traversal
             • Conditional logic for comparisons
             • Summation and averaging calculations
             • Linear search algorithm
             • Input/output formatting in C

           A concise program to practice array operations, 
           arithmetic computations, and basic search techniques.
-----------------------------------------------------------------------
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a;
    scanf("%d",&a);
    int arr[a];
int sum=0,c;
    for (int i=0;i<a;i++)
    {scanf("%d",&arr[i]);}
    scanf("%d",&c);
    int largest=arr[0];
    int smallest=arr[0];
    for (int i=0;i<a;i++)
    {if (arr[i] > largest) largest = arr[i];
     if (arr[i] < smallest) smallest = arr[i];}
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    for (int i=0;i<a;i++)
    {sum=sum+arr[i];}
    printf("Sum = %d\n",sum);
    double average = (double)sum / (double)a	;
    printf("Average = %.2f\n",average);
    int exist=0;
    for (int i=0;i<a;i++)
    {if (arr[i]==c)
    {exist=1;
    break;}}
    if (exist)
    printf("Element found\n");
    else 
    {printf("Element Not Found\n");}
    return 0;
}
