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

void Str_Conv_Toggle(char *Toggle)
{
     while(*Toggle != '\0')
    {
        if(*Toggle >= 'a' && *Toggle <= 'z')
        {
            *Toggle= *Toggle-32;
        }
        else if(*Toggle >= 'A' && *Toggle <= 'Z')
        {
            *Toggle = *Toggle+32;
        }
        else if (*Toggle >= '0' && *Toggle <= '9')
        {
            *Toggle ='$';
        }
        else
        {
            *Toggle ='*';
        }
        Toggle++;
    }
}

int main()
{
    char ch[20]="\0";


    printf("\n Enter String To Calculate Length :");
    //scanf("%s",&ch);
    scanf(" %[^\n]",&ch);
    //printf("\n  String Length Is :%d",StrlenMy(ch));


    Str_Conv_Toggle(ch);

    printf("\n Toggle Case Converted String Is : %s ",ch);

    getch();
    return 0;

}
