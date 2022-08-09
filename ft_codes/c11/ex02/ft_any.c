int ft_any(char **tab, int(*f)(char*))
{
    int     i;

    i = 0;
    while (tab[i])
        if (f(tab[i++]))
            return (1);
    return (0);
}

int zero_check(char *nums)
{
    int     i;

    i = 0;
    while (nums[i])
    {
        if (nums[i] == '0')
            return 1;
        else
            return 0;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char *tab[3] = {"1", "0", "0"};

    printf("%d", ft_any(tab, &zero_check));
}