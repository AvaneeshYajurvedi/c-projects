/*
-----------------------------------------------
        MENU DRIVEN UTILITY PROGRAM IN C
-----------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program provides a menu-driven
           interface that allows users to perform
           various operations including:
             • Basic arithmetic calculations
             • Odd/Even checking
             • Factorial (iterative + recursive)
             • Palindrome checking
             • Fibonacci series generation
             • Sorting numbers in ascending order

           Designed as a practice project to
           strengthen logic building and function
           implementation in C.
-----------------------------------------------
*/



#include<stdio.h>
long long unsigned iterative_factorial(int x);
long long unsigned rec_factorial(int x);
int fibonacci(int x);
int main(){
int choice;
while(1)
{
printf("WELCOME TO THE MENU DRIVEN PROGRAM\n");
printf("Please select from the option below to proceed further\n");
printf("1.Basic Arithmetic Operations Of Two Numbers\n");
printf("2.Given Number Is Odd Or Even\n");
printf("3.To Print Out Factorial Of A Number\n");
printf("4.To Check If A Given Number Is Pallindrome\n");
printf("5.To Print Out The Fibonacci Series\n");
printf("6.To Arrnage Given Numbers In Ascending Order\n");
printf("7.Exit The Program\n");
printf("\nEnter Your Choice :");
scanf("%d",&choice);
printf("\n");
if (choice<0)
{printf("INVALID");
continue;}
switch (choice)
{case 1:
{
int a,b,c;
printf("Enter The First Number\n");
scanf("%d",&a);
printf("Enter The Second Number\n");
scanf("%d",&b);
printf("Select the operation you wish to carry out\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("\nEnter Your Choice:");
scanf("%d",&c);
printf("\n");
if(c<0)
{printf("INVALID");
continue;}
switch (c)
{case 1:
{int add;
add=a+b;
printf("Addition Of the Two Numbers Is %d\n",add);
printf("\n");
break;}
case 2:
{int sub;
sub=a-b;
printf("Subtraction Of the Two Numbers Is %d\n",sub);
printf("\n");
break;}
case 3:
{int mul;
mul=a*b;
printf("Multiplication Of the Two Numbers Is %d\n",mul);
printf("\n");
break;}
case 4:
{int div;
div=a/b;
printf("Division Of the Two Numbers IS %d\n",div);
printf("\n");
break;}
default:
{printf("INVALID\n");}
printf("\n");
}break;}
case 2:
{int d;
printf("Enter The Number\n");
printf("\n");
scanf("%d",&d);
if(d%2==0)
{printf("Even Number\n");}
printf("\n");
if(d==0)
{printf("Even Number\n");}
printf("\n");
if(d%2!=0)
{printf("Odd Number\n");}
printf("\n");
break;}
case 3:
{int e,f;
printf("Enter a non negative number\n");
printf("\n");
scanf("%d",&e);
printf("\n");
if(e<0)
{printf("INVALID");
printf("\n");
continue;}
printf("Enter Your Choice\n");
printf("1.Iterative function\n");
printf("2.Recursive function\n");
printf("\n");
scanf("%d",&f);
printf("\n");
if(f<0)
{printf("INVALID");
continue;}
switch (f)
{case 1:
{printf("Factorial of %d is %lld\n",e,iterative_factorial(e));
printf("\n");
break;}
case 2:
{printf("Factorial of %d is %lld\n",e,rec_factorial(e));
printf("\n");
break;}
}break;}
case 4:
{int g;
int temp,rev=0,rem;
printf("Enter the number you wish to check\n");
printf("\n");
scanf("%d",&g);
printf("\n");
if (g<0)
{printf("INVALID\n");}
temp=g;
while(temp>0)
{rem=temp%10;
rev=rev*10+rem;
temp=temp/10;}
if (g==rev)
{printf("It Is A Pallindrome\n");
printf("\n");}
else
{printf("It Is Not A Pallindrome\n");}
printf("\n");
break;
}
case 5:
{int count,h;
printf("Enter the number of Fibonacci terms you want to print\n");
printf("\n");
scanf("%d",&count);
printf("\n");
printf("Fibonacci series: \n");
printf("\n");
for (h=0;h<count;h++)
{printf("%d\t ",fibonacci(h));}
printf("\n");
break;
}
case 6:
{int j,k,l,m;
printf("Enter the number of elements\n");
printf("\n");
scanf("%d",&l);
printf("\n");
int arr[l];
printf("Enter %d elements:\n",l);
printf("\n");
for (j=0;j<l;j++)
{scanf("%d",&arr[j]);}
for (j=0;j<l-1;j++)
{for (k=0;k<l-j-1;k++)
if (arr[k] > arr[k + 1]) {
m=arr[k];
arr[k]=arr[k+1];
arr[k+1]=m;}}
printf("Sorted array in ascending order:\n");
for (j=0;j<l;j++)
{printf("%d\t",arr[j]);}
printf("\n");
break;
}
case 7:
{printf("Exiting The Program...\n");
return 0;}
default:
{printf("Invalid Choice\n");}
}}
return 0;
}

long long unsigned iterative_factorial(int x)
{
long long unsigned fact =1;
for (int i=1;i<=x;i++)
{fact*=i;}
return fact;
}

long long unsigned rec_factorial(int x)
{
long long unsigned fact =1;
if (x==0||x==1)
return 1;
else
return (x*rec_factorial(x-1));
}

int fibonacci(int x)
{if (x==0)
{return 0;}
else if (x==1)
{return 1;}
else
{return(fibonacci(x-1)+fibonacci(x-2));
}}
