#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");
    printf("%.5f\n", (float) x / y); // .5表示有效位数
}
