//Write a program to check whether given number is even or odd (with if and conditional operator ?:)?
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    (n % 2 == 0)?printf("%d is EVEN \n", n): printf("%d is ODD \n",n);
    return 0;
}
