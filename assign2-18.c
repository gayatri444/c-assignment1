// A library charges a fine for every book returned late. Accept the number of days the member is late, compute and print the fine as follows
#include<stdio.h>
int main()
{
    int days;
    float fine = 0;
    printf("Enter Number of Late Days:");
    scanf("%d", &days);
    if (days <=5)
    fine = days * 1;
else if(days <= 10)
fine = days * 2;
else
fine = days * 5;
printf("\n late days %d ",days);
printf("\nn late fees amount : 2f",fine);
return 0;


}