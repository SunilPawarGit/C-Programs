#include<stdio.h>
#include<conio.h>

int Str_LenMY(char *src)
{
    int Len=0;

    while(*src != '\0')
    {

        Len++;
        src++;
    }
    return Len;
}

int Str_Ana(char *src1,char *src2)
{

    while(*src1 != '\0')
    {
        while(src2 != '\0')
        {
            if (*src1 == *src2)
            {
                src1++;
                break;
            }
            src2++;
        }


    }

        if(*src1 == '\0' )

        {
            return 1;
        }
        else
        {
            return 0;
        }
}

int main()
{
    char Ch1[10]="\0",Ch2[10]="\0";

    printf("\n Enter First String : ");
    scanf(" %[^\n]",&Ch1);

    printf("\n Enter Second String : ");
    scanf(" %[^\n]",&Ch2);

    if(Str_LenMY(Ch1) != Str_LenMY(Ch2))
    {
        printf("\n Given String Length Are Not Match.");
        return 0;
    }

    if(Str_Ana(Ch1,Ch2))
    {
        printf("\n Given String Are Anagram.");

    }
    else
    {
        printf("\n Given String Are Not Anagram.");
    }
    getch();
    return 0;


}
