/*
----------------------------------------------------
                 ARRAY MANIPULATION PROGRAM
----------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program reads 'n' integers into an
           array and attempts to perform an element
           rearrangement/swapping operation. It then
           displays the array before and after the
           transformation.

           NOTE: The program structure is intended
           for practicing:
              • Array declaration and indexing
              • Loop-based input/output
              • Basic element manipulation
              • Understanding of sizeof() behavior
----------------------------------------------------
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i;
    int temp;
    
    scanf("%d",&a);
    int num[a];
    int b = sizeof(num-1);
    for (i=0;i<a;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<a;i++)
    {
        printf("%d\t",num[i]);
    }
    for (i=0;i<a;i++)
    {
    num[b]=temp;
    num[a]=num[b];
    temp=num[a];
    }
    for (i=0;i<a;i++)
    {
        printf("%d\t",num[b]);
    }
    return 0;
}
