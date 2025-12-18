/*
-----------------------------------------------------------------------
                        ROMAN NUMERAL CONVERTER (0–99)
-----------------------------------------------------------------------
Author   : Avaneesh Yajurvedi
Purpose  : Converts a given integer (0–99) into its Roman numeral form.
           Demonstrates:
             • Arrays of strings
             • String concatenation using strcat()
             • Basic arithmetic for digit extraction (tens & ones)
             • Input validation and formatted output

           A simple and elegant implementation to strengthen 
           string-handling and logic-building skills in C.
-----------------------------------------------------------------------
*/

#include<stdio.h>
#include<string.h>
int main (){
int a;
printf("ENTER THE NUMBER\n");
scanf("%d",&a);
char roman [20]="";
if (a<0||a>99){
printf("OUT OF RANGE\n");
return 0;} 
char *tens[]={"" , "X" , "XX" , "XXX" , "XL" ,"L" , "LX" , "LXX" , "LXXX" , "XC" };
char *ones[]={"" , "I" , "II" , "III" , "IV" , "V" , "VI" , "VII" , "VIII" , "IX" };
int t=a/10;
int o=a%10;
strcat(roman,tens[t]);
strcat(roman,ones[o]);
printf("%s\n",roman);
return 0;
}
