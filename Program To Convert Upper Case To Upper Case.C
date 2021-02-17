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

void Str_Conv_UPR(char *UPR)
{
     while(*UPR != '\0')
    {
        if(*UPR >= 'a' && *UPR <= 'z')
        {
            *UPR= *UPR-32;
        }
        UPR++;
    }
}

int main()
{
    char ch[20]="\0";


    printf("\n Enter String To Calculate Length :");
    scanf("%s",&ch);

    printf("\n  String Length Is :%d",StrlenMy(ch));


    Str_Conv_UPR(ch);

    printf("\n Upper Case Converted String Is : %s ",ch);

    getch();
    return 0;

}
