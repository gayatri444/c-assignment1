#include<stdio.h>
int main()
{
    int num;
     printf("Enter a Number");
     scanf("%d",num);
     if(num > 0)
     printf("enter a positive number");
     else if(num < 0)
     printf("Enter a negetive number");
    else
    printf("is a zero");
    return 0;
}

