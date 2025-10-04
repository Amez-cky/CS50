#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("What's your name? ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // 字符也是整形，可以直接用来比较
        {
            printf("%c", s[i] - 32); // 将小写换为大写,也可将"32"替换为"'a'-'A'"
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    // 该for循环的内容可用"printf("%c,toupper(s[i])");"代替
    printf("\n");
}
