/*
-----------------------------------------------------------------------
                       STUDENT RECORD MANAGEMENT
-----------------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program manages student records, including:
             • Storing roll number, name, gender, and marks
             • Displaying all student records
             • Sorting students based on marks in descending order
             • Searching for a student by roll number

           Concepts Demonstrated:
             • Structures (struct) in C
             • Arrays of structures
             • Nested loops for sorting (bubble sort)
             • Conditional checks and searching
             • Input/output handling for multiple records

           A practical exercise in data organization, sorting,
           and record retrieval using C programming.
-----------------------------------------------------------------------
*/


#include<stdio.h>
struct student {
int roll_no;
char name[15];
char gender [20];
int marks;};
int main(){
int n,j,k;
printf("Enter the number of records\n");
scanf("%d",&n);
struct student stu[n];
for (int i=0;i<n;i++)
{
printf("\n");
printf("Enter The Roll No.\n");
scanf("%d",&stu[i].roll_no);
printf("\n");
printf("Enter The Name Of The Student\n");
scanf("%s",stu[i].name);
printf("\n");
printf("Enter The Gender\n");
scanf("%s",stu[i].gender);
printf("\n");
printf("Enter the Marks\n");
scanf("%d",&stu[i].marks);
printf("\n");
}
for (int i=0;i<n;i++)
{
printf("\n");
printf("Roll Number Entered: %d\n",stu[i].roll_no);
printf("Name Of The Student: %s\n",stu[i].name);
printf("Gender: %s\n",stu[i].gender);
printf("Marks Obtained %d",stu[i].marks);
printf("\n");
}
printf("\n");
printf("\n");
struct student m;
printf("Sorted List Is:\n");
for (j=0;j<n-1;j++)
{for (k=0;k<n-j-1;k++)
{if (stu[k].marks < stu[k + 1].marks) {
m=stu[k];
stu[k]=stu[k+1];
stu[k+1]=m;}}}
for (int i=0;i<n;i++)
{
printf("\n");
printf("Roll Number Entered: %d\n",stu[i].roll_no);
printf("Name Of The Student: %s\n",stu[i].name);
printf("Gender: %s\n",stu[i].gender);
printf("Marks Obtained %d",stu[i].marks);
printf("\n");
}
printf("\n");
printf("Enter the roll no. you want to search\n");
int d;
int x=0;
scanf("%d",&d);
for (int i=0;i<n;i++)
{if (d==stu[i].roll_no)
{printf("\n");
printf("Roll Number Entered: %d\n",stu[i].roll_no);
printf("Name Of The Student: %s\n",stu[i].name);
printf("Gender: %s\n",stu[i].gender);
printf("Marks Obtained %d",stu[i].marks);
printf("\n");
x=1;}}
if (x==0)
{printf("Invalid Input Roll no.\n");}
return 0;
}
