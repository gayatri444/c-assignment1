//Write a Program to convert lowercase letter into uppercase letter and vice versa.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:");
    if (ch >= '0' && ch <= '9')
    printf(" Enter a DIGIT  %c :",ch);

    else if (ch >= 'a'&& ch <='z')
     printf("You've Entered LOWERCASE Alphabet %c :",ch); 

       else if (ch >= 'A'&& ch <='Z')
       printf(" You've Entered UPPERCASE Letter:%c",ch);
        
     else
    printf("INVALID INPUTS , PLEASE ENTER AN ALPHABET OR A WORD !!!");
return 0;
}
