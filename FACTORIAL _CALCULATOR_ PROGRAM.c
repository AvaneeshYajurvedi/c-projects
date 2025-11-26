/*
----------------------------------------------------
              FACTORIAL CALCULATOR PROGRAM
----------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : A simple menu-driven C program that allows
           the user to compute the factorial of a
           non-negative integer using either:

              • Iterative method
              • Recursive method

           The program continues to run until the
           user chooses to exit. Designed for
           practicing function implementation,
           recursion, and control flow in C.
----------------------------------------------------
*/


#include<stdio.h>
long long unsigned itreative_factorial(int x);
long long unsigned rec_factorial(int x);
int main(){

int num,choice;
while(1)
{
printf("WELCOME TO THE MENU\n");
printf("Enter the number for factorial\n");
scanf("%d",&num);
if (num<0)
{printf("INVALID\n");
continue;}
printf("1.Iterative function\n");
printf("2.Recursive function\n");
printf("3.Exit\n");
printf("Enter Your Choice\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("%lld\n",itreative_factorial(num));
break;
case 2:
printf("%lld\n",rec_factorial(num));
break;
case 3:
printf("EXITING PROGRAM\n");
return 0;
default:
printf("INVALID\n");
}
}
return 0;
}

long long unsigned itreative_factorial(int x)
{
long long unsigned fact=1;
for (int i=1;i<=x;i++)	
{
fact*=i;
}
return fact;
} 

long long unsigned rec_factorial(int x)
{
if (x==0||x==1)
return 1;
else
return (x*rec_factorial(x-1));
}
