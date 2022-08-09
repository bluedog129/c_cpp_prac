int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	n;
	int	count;

	count = 0;
	n = 0;
	while (n < length)
		if (f(tab[n++]))
			count++;
	return (count);
}

int zero_check(char *nums)
{
    int     i;

    i = 0;
    while (nums[i])
    {
        if (nums[i] == '0')
            return 0;
        else
            return 1;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char *tab[3] = {"1", "1", "0"};
    int length =

    printf("%d", ft_count_if(tab, length, &zero_check));
}