#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("enter 3 sides of triangle to check whether the triangle is valid or not valid:");
    scanf("%d%d%d", &s1 ,&s2,&s3);
    if(s1+s2>s3 && s1+s3>s3 && s2+s3>s1)
    printf("the triangle is valid");
else
printf("the triangle is invalid !!!");
return 0;   
}