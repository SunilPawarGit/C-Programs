#include<stdio.h>
#include<conio.h>

int StrlenMy(char *src)
{
    int len=0;

    while(*src != '\0')
    {
        len++;
        src++;
    }

    return len;
}

int Is_Palindrome(char *src)
{
    char *rev;
    rev = src+(StrlenMy(src)-1);

    while(src <= rev)
    {

       if(*src != *rev)
       {
           return 0;
       }

        src++;
        rev--;
    }
    return 1;

}

int main()
{
    char ch[20];

    printf("\n Enter String :");
    scanf(" %[^\n]",&ch);

    if(Is_Palindrome(ch))
    {
        printf("\n Given String Is Palindrome.");
    }

    else
    {
        printf("\n Given String Is Not Palindrome.");
    }

    getch();
    return 0;

}
