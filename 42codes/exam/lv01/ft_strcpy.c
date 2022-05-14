#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    // 마지막 인덱스에 널값 넣어줘야함
    s1[i] = '\0';
    return (s1);
}