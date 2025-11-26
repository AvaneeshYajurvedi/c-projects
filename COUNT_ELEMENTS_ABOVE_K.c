/*
------------------------------------------------------------
                    COUNT ELEMENTS ABOVE K
------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : Reads 'n' integers into an array and counts how many
           elements are strictly greater than a given value 'k'.

           Key Concepts Practiced:
             • Array input handling
             • Conditional counting
             • Basic iteration in C
------------------------------------------------------------
*/


#include<stdio.h>
int main(){
int n,k;
int count=0;
scanf("%d %d",&n,&k);
int arr[n];
for(int i=0;i<n;i++)
{scanf("%d",&arr[i]);}
for(int i=0;i<n;i++)
{if(arr[i]>k)
{count++;}}
printf("%d",count);
return 0;
}
