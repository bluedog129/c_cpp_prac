#include <stdio.h>
#include <stdlib.h>

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
    while(nums[i])
    {
        if (nums[i] != '0')
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    char *tab = "001";
    char **arr = malloc(sizeof(char *) * 2);

    arr[0] = tab;
    arr[1] = 0;

    printf("%d", ft_any(arr, zero_check));
}