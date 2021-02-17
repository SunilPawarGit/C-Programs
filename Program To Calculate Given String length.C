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

int main()
{
    char ch[20]="\0";

    printf("\n Enter String To Calculate Length :");
    scanf("%s",&ch);

    printf("\n String %s Length Is :%d",ch,StrlenMy(ch));

    getch();
    return 0;

}
