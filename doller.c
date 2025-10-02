#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long dollers = 1;
    while (true)
    {
        char c = get_char("Here is $%li.Double it and give it to the next person? ", dollers);
        if (c == 'y')
        {
            dollers *= 2;
        }
        else
        {
            break;
        }
    }
}
