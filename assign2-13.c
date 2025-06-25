//Accept the time as hour, minute and seconds and check whether the time is valid.
#include<stdio.h>
int main()
{
    int h , m, s;
    printf("enter time hh:mm:ss:");
    scanf("%d%d%d", &h ,&m, &s);
    //using nested if
    if (h >=0 && h<=24)
    {
        if(m >=0 && m<=60)
        {
            if(s>=0 && s<=60)
            {
                printf("\n Time is valid  : %02d:%02d:%02d",h,m,s);

            }
            else
            printf("\n INVALID SECOND !!!");

        }
        else
        printf("\n INVALID MIN !!!");

    }
    else
    printf("\n INVALID HOURS A!!!");
return 0;

}