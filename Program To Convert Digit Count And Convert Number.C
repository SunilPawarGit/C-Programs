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

int Str_Conv_Num(char *Toggle)
{
     int Num = 0;
     while(*Toggle != '\0')
    {

         if (*Toggle >= '0' && *Toggle <= '9')
        {
            Num = (Num*10)+(*Toggle-48);
        }
        Toggle++;
    }
     return Num;
}

int main()
{
    char ch[20]="\0";


    printf("\n Enter String To Calculate Length :");
    //scanf("%s",&ch);
    scanf(" %[^\n]",&ch);
    //printf("\n  String Length Is :%d",StrlenMy(ch));




    printf("\n Toggle Case Converted String Is : %d ",Str_Conv_Num(ch));

    getch();
    return 0;

}
