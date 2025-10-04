#include <cs50.h>
#include <stdio.h>

float Average(int length, int array[]);

int main(void)
{
    int n = get_int("How many times have you been scored? ");
    int score[n];
    int j;
    for (int i = 0; i < n; i++)
    {
        j = i + 1;
        score[i] = get_int("The %ith score is: ", j);
    }
    printf("The average of your scores is:%f.\n", Average(n, score));
}

float Average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
