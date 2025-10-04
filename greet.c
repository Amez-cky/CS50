#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[])
{
    printf("Hello,");
    for (int i = 1; i < argc; i++) //argv[0]为该程序的名字
    {
        printf("%s ",argv[i]);
    }
    printf("\n");
}
