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

void Is_Reverse(char *src)
{
    char *rev,ch;
    rev = src+(StrlenMy(src)-1);

    while(src <= rev)
    {
        if(*src != *rev)
        {
            ch = *src;
            *src = *rev;
            *rev = ch;
        }

        src++;
        rev--;

    }


}

int main()
{
    char ch[20];

    printf("\n Enter String :");
    scanf(" %[^\n]",&ch);

    Is_Reverse(ch);

    printf("\n Reverse String Is:%s",ch);


    getch();
    return 0;

}
