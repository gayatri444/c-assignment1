//Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator)
#include<stdio.h>
int main()
{
    int a, b ,c max , min;
    printf("Enter a 3 Number TO Find a Minimum and Maximum Number");
    scanf("%d%d%d",&a, &b,&c);
    max = (a > = b)? ((a > = c)?a:c):((b > = c)?b:c);
    printf("\n%d is the maximum", max);
     max = (a < = b)? ((a < = c)?a:c):((b < = c)?b:c);
      printf("\n%d is the minimum", min);
      return 0;

}