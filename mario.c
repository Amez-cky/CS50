#include <cs50.h>
#include <stdio.h>

void print_row(int n);

int main(void)
{
    const int n = 3; // 保持n不变
    for (int i = 0; i < n; i += 1)
    {
        print_row(n);
    }
}

void print_row(int n)
{
    for (int i = 0; i < n; i += 1)
    {
        printf("#");
    }
    printf("\n");
}
