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

void Str_Conv_Lwer(char *LWR)
{
     while(*LWR != '\0')
    {
        if(*LWR >= 'A' && *LWR <= 'Z')
        {
            *LWR= *LWR+32;
        }
        LWR++;
    }
}


int main()
{
    char ch[20]="\0";


    printf("\n Enter String To Calculate Length :");
    scanf("%s",&ch);

    printf("\n  String Length Is :%d",StrlenMy(ch));

    Str_Conv_Lwer(ch);

    printf("\n Lower Case Converted String is :%s",ch);


    getch();
    return 0;

}
