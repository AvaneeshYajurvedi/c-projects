/*
------------------------------------------------------------
               LARGEST & SMALLEST ELEMENT FINDER
------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program accepts 5 integer inputs, stores them
           in an array, and uses pointer arithmetic to find
           the largest and smallest values.

           Key Concepts Practiced:
             • Array traversal using pointers
             • Dereferencing and pointer arithmetic
             • Basic comparison logic
------------------------------------------------------------
*/


#include<stdio.h>
int main(){
int a[5],i,*ptr;
printf("Enter The Elements\n");
for (i=0;i<5;i++)
{scanf("%d",&a[i]);
}
ptr=&a[0];
int largest=*ptr;
int smallest=*ptr;
for(i=0;i<5;i++)
{int x=*(ptr+i);
if(x>largest)
{largest=x;}
if(x<smallest)
{smallest=x;}
}
printf("Largest Number is %d\n",largest);
printf("Smallest Number is %d\n",smallest);
return 0;
}
