#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
    int i = 0;
    int j;
    char **ans = (char **)malloc(1000);

    while (*str)
    {
        if (*str > 32)
        {
            while (*str < 33)
                str++;
            j = 0;
            ans[i] = (char *)malloc(1000);
            while (*str > 32)
            {
                ans[i][j] = *str;
                j++;
                str++;
            }
            ans[i][j] = '\0';
            i++;
        }
        else
            str++;
        ans[i] = 0;
    }
    return (ans);
}

int main()
{
    char str[100] = "   hello world !!   ";
    char **ans = ft_split(str);

    for(int i = 0; ans[i]; i++)
        printf("%s\n", ans[i]);
    return (0);
}