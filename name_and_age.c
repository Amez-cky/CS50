#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string name = get_string("What's your name? ");
    int age = get_int("How old are you? ");
    printf("Hello,%s.Today is your %dth birthday.\n", name, age);
}
