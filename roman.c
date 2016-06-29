#include<stdio.h>
#include<string.h>
int digitvalue(char);
int main()
{
char roman_number[50];
int i=0;
long int number=0;
printf("Enter any roman number (valid digits are I,V,X,L):\n");
while(roman_number[i])
{
if(digitvalue(roman_number[i])<0)
{
printf("Invalid roman digit:%c",roman_number[i]);
return 0;
}
if((strlen(roman_number)-i)>2)
{
if(digitvalue(roman_number[i])<digitvalue(roman_number[i+2]))
{
printf("Invalid number");
return 0;
}
}
if(digitvalue(roman_number[i])>=digitvalue(roman_number[i+1]))
number=number+digitvalue(roman_number[i]);
else
{
number=number+(digitvalue(roman_number[i+1])-digitvalue(roman_number[i]));
i++;
}
i++;
}
printf("Its decimal value is:%1d",number);
return 0;
}
int digitvalue(char c)
{
int value=0;
{
switch(c)
{
case 'I':value=1;break;
case 'V':value=5;break;
case 'X':value=10;break;
case 'L':value=50;break;
default:value=-1;
}
return value;
}
}
