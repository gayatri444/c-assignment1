Accept a lowercase character from the user and check whether the character
is a vowel or consonant.
 #include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Lowercase Character:");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u')
    printf("%c is an vowel",ch);
else 
printf("%c are no vowel in your character",ch);
return 0;

}