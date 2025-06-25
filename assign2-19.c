//Write a Program to convert lowercase letter into uppercase letter and vice versa.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:");
    if (ch >= 'a' && ch <= 'z')
    {
        printf("You've Entered LOWERCASE Alphabet %c :",ch);
        ch = ch -32;
        printf("\n After converting Alphabet lower to uppercase:%c",ch);

    }
    else if (ch >= 'A'&& ch <='Z')
    {
      printf("You've Entered UPPERCASE Alphabet %c :",ch);  
       ch = ch +32;
       printf("\n After converting Alphabet upper to uppercase:%c",ch);
    
    }
    else
    printf("INVALID INPUTS , PLEASE ENTER AN ALPHABET OR A WORD !!!");
return 0;
}
