/*
------------------------------------------------------------
                 FILE CHARACTER ANALYZER (C)
------------------------------------------------------------
Author   : Avaneesh Yajurvedi

Purpose  : This program opens a user-specified file and counts:
             • Total characters
             • Spaces
             • Tabs
             • Newlines
           It demonstrates basic file handling, character-by-
           character reading, and conditional counting in C.

           Key Concepts Practiced:
             • fopen(), fgetc(), fclose()
             • Looping through file contents
             • Character classification
             • Defensive file I/O programming
------------------------------------------------------------
*/


#include<stdio.h>
int main(){
FILE *fp;
int ch;
char fname[300];
int no_of_char=0,no_of_spaces=0,no_of_lines=0,no_of_tabs=0;
printf("Enter the file name with extension\n");
scanf("%299s",fname);
fp=fopen(fname,"r");
if (fp==NULL)
{printf("File Not Found\n");
return 1;}
while ((ch=fgetc(fp))!=EOF)
{
no_of_char++;
if (ch==' ')
{no_of_spaces++;}
if (ch=='\t')
{no_of_tabs++;}
if (ch=='\n')
{no_of_lines++;}
}
fclose(fp);
printf("Number Of Characters is %d\n",no_of_char);
printf("Number Of Spaces is %d\n",no_of_spaces);
printf("Number Of Lines is %d\n",no_of_lines);
printf("Number Of Tabs is %d\n",no_of_tabs);
return 0;
}

