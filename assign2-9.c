//Accept any year as input through the keyboard. Write a program to check whether the year isa leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("enter year to check leap or not:");
    scanf("%d",year);
     if((year % 4 == 0 && year % 100 !=0)||(year % 400 == 0))
     printf("\n %d is an leap year ", year);
    else
    printf("\n %d is not a leap !!,year");
return 0;

}