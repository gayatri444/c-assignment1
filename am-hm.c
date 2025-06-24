#include<stdio.h>
int main()
{
    int a,b;
    float AM,HM;
    printf("\nEnter a 1st value");
    scanf("%d",&a);
    printf("\nEnter a 2nd value");
    scanf("%d",&b);
    AM=(a+b)/2;
    HM=a*b/(a+b);
    printf("Arithmetic mean  is a: %f",AM);
    printf("Harmonic mean is a :%f",HM);
    return 0;

}